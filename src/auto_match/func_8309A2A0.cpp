// hkCpuPairGetClosestPoints: runs a batch of hkpPairGetClosestPointsCommands (Havok
// Physics/Collide/Query/Multithreaded/CollisionQuery). Each command's closest points are
// collected into a stack buffer by an hkpFixedBufferCdPointCollector and copied out, either
// to the command's own buffer or to a slot of a shared buffer reserved with an atomic add.
// The collector's constructor resets the early-out distance to HK_REAL_MAX (__real@7f7fffee).
#include "havok/hkpCdPointCollector.h"
#include "havok/hkpCollidable.h"
#include "havok/hkpCollisionDispatcher.h"

// hkpRootCdPoint: hkContactPoint (two hkVector4) plus the root collidables and shape keys.
struct hkpRootCdPoint {
    hkUint32 m_data[12];
};

class hkpFixedBufferCdPointCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFixedBufferCdPointCollector);
    HK_FORCE_INLINE hkpFixedBufferCdPointCollector(hkpRootCdPoint *buffer, int capacity)
    {
        m_pointsArrayBase = buffer;
        m_nextFreePoint = buffer;
        m_capacity = capacity;
        m_numPoints = 0;
    }
    virtual void addCdPoint(const hkpCdPoint &point);
    hkpRootCdPoint *m_pointsArrayBase;   // +0x8
    hkpRootCdPoint *m_nextFreePoint;     // +0xc
    int m_capacity;                      // +0x10
    int m_numPoints;                     // +0x14
};

struct hkpPairGetClosestPointsCommand {   // 0x20 bytes
    const hkpCollidable *m_collidableA;
    const hkpCollidable *m_collidableB;
    hkpRootCdPoint *m_results;
    int m_resultsCapacity;
    int m_numResultsOut;
    hkUint32 *m_indexIntoSharedResults;
    int m_pad[2];
};

struct hkpPairGetClosestPointsJob {
    char m_pad[0x20];
    hkReal m_tolerance;   // +0x20
};

extern "C" long _InterlockedExchangeAdd(long volatile *addend, long value);

// hkString::memCpy16NonEmpty
static HK_FORCE_INLINE void memCpy16NonEmpty(void *dst, const void *src, int numQuads)
{
    const hkUint32 *src32 = reinterpret_cast<const hkUint32 *>(src);
    hkUint32 *dst32 = reinterpret_cast<hkUint32 *>(dst);
    do {
        dst32[0] = src32[0];
        dst32[1] = src32[1];
        dst32[2] = src32[2];
        dst32[3] = src32[3];
        dst32 += 4;
        src32 += 4;
    } while (--numQuads > 0);
}

extern "C" void fn_8309A2A0(const hkpPairGetClosestPointsJob *job, const hkpCollisionInput *collisionInput,
    hkpPairGetClosestPointsCommand *command, int numCommands)
{
    hkpCollisionInput input;
    input.m_dispatcher = collisionInput->m_dispatcher;
    input.m_filter = collisionInput->m_filter;
    input.m_tolerance = job->m_tolerance;

    hkpRootCdPoint buffer[16];
    hkpFixedBufferCdPointCollector collector(buffer, 1);

    for (int i = 0; i < numCommands; i++, command++) {
        const hkpCollidable *a = command->m_collidableA;
        const hkpCollidable *b = command->m_collidableB;
        const hkpShape *shapeA = a->m_shape;
        const hkpShape *shapeB = b->m_shape;
        new (&collector) hkpFixedBufferCdPointCollector(buffer, command->m_resultsCapacity);
        hkpCollisionDispatcher::GetClosestPointsFunc func =
            collisionInput->m_dispatcher->getGetClosestPointsFunc(shapeA->getType(), shapeB->getType());
        func(*a, *b, input, collector);

        hkpRootCdPoint *results;
        if (!command->m_indexIntoSharedResults) {
            results = command->m_results;
        } else {
            int numPoints = collector.m_numPoints;
            int start = _InterlockedExchangeAdd((long volatile *)command->m_indexIntoSharedResults, numPoints);
            if (start + numPoints <= command->m_resultsCapacity) {
                results = command->m_results + start;
            } else {
                _InterlockedExchangeAdd((long volatile *)command->m_indexIntoSharedResults, -numPoints);
                results = HK_NULL;
            }
        }
        if (results) {
            int numPoints = hkUint16(collector.m_numPoints);
            command->m_numResultsOut = numPoints;
            if (numPoints > 0)
                memCpy16NonEmpty(results, buffer, numPoints * int(sizeof(hkpRootCdPoint) / 16));
        }
    }
}
