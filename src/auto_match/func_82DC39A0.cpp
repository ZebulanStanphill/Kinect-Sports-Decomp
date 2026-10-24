// hkCpuAgentSectorJob (Physics/Dynamics/World/Simulation/Multithreaded/Cpu): runs the narrow phase
// for one agent sector job (DYNAMICS_JOB_AGENT_SECTOR, 0xd: the entries of job.m_numSectors sectors of
// the island's agent track, with a two-entry prefetch pipeline), or for a TOI job's list of entries,
// collecting the deferred constraint add/remove commands; the results go to the world (locked) or to the
// job's header, and the job is handed back with hkJobQueue::finishJobAndGetNextJob (fn_82CE8E78).
//
// HK_REAL_MAX: the original uses the literal 3.40282e+38f, loaded once into f31 and kept across the
// calls; the game's copy of that constant is lbl_82134508, which Matching C units reference. A literal
// gets the name of the first constant with its value that the compiler meets in the unit, so
// lbl_82134508 is defined here (selectany) and read by the function below, compiled first; the literal
// in fn_82DC39A0 then loads lbl_82134508 and still keeps it in f31.
//
// Status: 100% at /O2 (Havok code; flag file). Commutative operand order (add/lwzx) follows the
// order in which named locals are declared: the sector size is one local `sectorSize`, declared
// after `entry` and reassigned in the loop (end = nextNext + sectorSize), and the queue size in the
// world branch is a local `qsize`.
#include "havok/hkBase.h"

extern "C" unsigned __int64 __mftb();
extern "C" void __dcbt(int offset, const void *base);

// hkMonitorStream (Common/Base/Monitor/hkMonitorStream.h): the per-thread timer stream lives in a TLS slot.
class hkMonitorStream {
public:
    struct TimerCommand {
        const char *m_commandAndMonitor;
        hkUint32 m_time0;
        hkUint32 m_time1;
    };
    char *m_start;
    char *m_end;
    char *m_capacity;
    char *m_capacityMinus16;
};
extern "C" hkMonitorStream *KeTlsGetValue(unsigned int index);
extern "C" unsigned int lbl_8323B4A0;   // hkMonitorStream TLS slot

#define HK_TIMER_BEGIN(NAME) \
    { \
        hkMonitorStream *mStream = KeTlsGetValue(lbl_8323B4A0); \
        if (mStream->m_end < mStream->m_capacityMinus16) { \
            hkMonitorStream::TimerCommand *h = reinterpret_cast<hkMonitorStream::TimerCommand *>(mStream->m_end); \
            h->m_commandAndMonitor = NAME; \
            h->m_time0 = (hkUint32)__mftb(); \
            mStream->m_end = reinterpret_cast<char *>(h + 1); \
        } \
    }

extern "C" void RtlEnterCriticalSection(void *cs);
extern "C" void RtlLeaveCriticalSection(void *cs);

class hkCriticalSection {
public:
    HK_FORCE_INLINE void enter() { RtlEnterCriticalSection(this); }
    HK_FORCE_INLINE void leave() { RtlLeaveCriticalSection(this); }
    hkUint8 m_section[0x1c];
};

class hkCriticalSectionLock {
public:
    HK_FORCE_INLINE hkCriticalSectionLock(hkCriticalSection *section) : m_section(section) { m_section->enter(); }
    HK_FORCE_INLINE ~hkCriticalSectionLock() { m_section->leave(); }
    hkCriticalSection *m_section;
};

extern "C" int lbl_8323B520;

class hkpCollidable;
class hkpConstraintInstance;
class hkpWorld;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
struct hkpAgentNnEntry;

struct hkStepInfo {
    unsigned __int64 m_time[2];
};

struct hkpCollisionQualityInfo {
    hkUint8 m_pad0[0x10];
    hkUint32 m_useContinuousPhysics;   // +0x10
    hkUint8 m_pad1[0x2c];
};

class hkpCollisionDispatcher {
public:
    HK_FORCE_INLINE hkpCollisionQualityInfo *getCollisionQualityInfo(hkInt8 index) { return &m_collisionQualityInfo[index]; }
    hkUint8 m_pad[0x1c20];
    hkpCollisionQualityInfo m_collisionQualityInfo[8];   // +0x1c20
};

class hkpContactMgr {
public:
    virtual ~hkpContactMgr();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void processContact(const hkpCollidable &a, const hkpCollidable &b, const hkpProcessCollisionInput &input,
                                hkpProcessCollisionOutput &output);   // +0x18
};

struct hkpAgentNnEntry {
    hkUint8 m_pad0[8];
    hkpContactMgr *m_contactMgr;      // +0x8
    hkInt8 m_collisionQualityIndex;   // +0xc
    hkUint8 m_pad1[3];
    hkpCollidable *m_collidable[2];   // +0x10
    hkUint8 m_pad2[0x80 - 0x18];
};

struct hkpProcessCollisionInput;
extern "C" void fn_82D9C790(hkpProcessCollisionInput *self, const hkpProcessCollisionInput *other);   // copy constructor

struct hkpProcessCollisionInput {
    HK_FORCE_INLINE hkpProcessCollisionInput(const hkpProcessCollisionInput &other) { fn_82D9C790(this, &other); }
    HK_FORCE_INLINE ~hkpProcessCollisionInput()
    {
        if (m_spareAgentSector)
            hkMemoryRouter::getInstance().heap().blockFree(m_spareAgentSector, 0x200);
    }

    hkpCollisionDispatcher *m_dispatcher;   // +0x0
    hkUint8 m_pad0[0x10];
    hkUint32 m_createPredictiveAgents;      // +0x14
    hkUint8 m_pad1[0x38];
    hkStepInfo m_stepInfo;                  // +0x50
    hkpCollisionQualityInfo *m_collisionQualityInfo;   // +0x60
    void *m_spareAgentSector;               // +0x64
    hkUint8 m_pad2[0x10];
};

struct hkpProcessCdPoint {
    hkUint8 m_data[0x30];
};

#define HK_REAL_MAX 3.40282e+38f
extern "C" __declspec(selectany) const float lbl_82134508 = HK_REAL_MAX;
// Compiled first: makes lbl_82134508 the name of the HK_REAL_MAX literal in this unit.
extern "C" float hkRealMaxPoolAnchor_82DC39A0() { return lbl_82134508; }
struct hkpProcessCollisionOutput {
    HK_FORCE_INLINE hkpProcessCollisionOutput(class hkpConstraintOwner *owner) : m_constraintOwner(owner)
    {
        m_toi.m_time = HK_REAL_MAX;
        m_toi.m_a = 0.0f;
        m_toi.m_b = 0.0f;
    }
    HK_FORCE_INLINE void reset()
    {
        m_firstFreeContactPoint = &m_contactPoints[0];
        m_toi.m_time = HK_REAL_MAX;
        m_potentialContacts = HK_NULL;
    }
    HK_FORCE_INLINE bool isEmpty() const { return m_firstFreeContactPoint == &m_contactPoints[0]; }
    HK_FORCE_INLINE hkBool hasToi() const { return m_toi.m_time != HK_REAL_MAX; }

    hkpProcessCdPoint *m_firstFreeContactPoint;   // +0x0
    class hkpConstraintOwner *m_constraintOwner;  // +0x4
    hkUint8 m_pad0[8];
    hkpProcessCdPoint m_contactPoints[0x100];     // +0x10
    struct ToiInfo {
        hkUint8 m_contactPoint[0x20];
        hkReal m_time;           // +0x3030
        hkUint8 m_pad[0x1c];
        hkReal m_a;              // +0x3050
        hkReal m_b;              // +0x3054
        hkUint8 m_pad2[0x28];
    } m_toi;                                      // +0x3010
    void *m_potentialContacts;                    // +0x3080
    hkUint8 m_pad1[0xc];
};

// Physics commands (Physics/Dynamics/World/CommandQueue).
struct hkPhysicsCommand {
    enum Type {
        TYPE_ADD_CONSTRAINT_TO_LOCKED_ISLAND,
        TYPE_REMOVE_CONSTRAINT_FROM_LOCKED_ISLAND
    };
    HK_FORCE_INLINE hkPhysicsCommand(Type type) : m_type(hkUint8(type)) {}
    hkUint8 m_type;
};

struct hkAddConstraintToCriticalLockedIslandPhysicsCommand : public hkPhysicsCommand {
    HK_FORCE_INLINE hkAddConstraintToCriticalLockedIslandPhysicsCommand(hkpConstraintInstance *object, int callbackRequest)
        : hkPhysicsCommand(TYPE_ADD_CONSTRAINT_TO_LOCKED_ISLAND), m_object(object), m_callbackRequest(callbackRequest) {}
    hkpConstraintInstance *m_object;
    int m_callbackRequest;
};

struct hkRemoveConstraintFromCriticalLockedIslandPhysicsCommand : public hkPhysicsCommand {
    HK_FORCE_INLINE hkRemoveConstraintFromCriticalLockedIslandPhysicsCommand(hkpConstraintInstance *object)
        : hkPhysicsCommand(TYPE_REMOVE_CONSTRAINT_FROM_LOCKED_ISLAND), m_object(object) {}
    hkpConstraintInstance *m_object;
};

class hkPhysicsCommandQueue {
public:
    template <typename COMMAND>
    HK_FORCE_INLINE COMMAND *getCurrent() { return reinterpret_cast<COMMAND *>(reinterpret_cast<char *>(this) + (m_start + m_size)); }
    HK_FORCE_INLINE hkPhysicsCommand *getStart() { return reinterpret_cast<hkPhysicsCommand *>(reinterpret_cast<char *>(this) + m_start); }

    int m_start;
    hkUint32 m_size;
    int m_capacity;
};

template <int SIZE>
class __declspec(align(16)) hkFixedSizePhysicsCommandQueue : public hkPhysicsCommandQueue {
public:
    HK_FORCE_INLINE hkFixedSizePhysicsCommandQueue() { m_start = 0x10; m_size = 0; m_capacity = SIZE; }
    int m_pad;
    hkUint8 m_buffer[SIZE];
};

struct hkpConstraintInfo {
    HK_FORCE_INLINE void clear() { m_maxSizeOfSchema = 0; m_sizeOfSchemas = 0; m_numSolverResults = 0; m_numSolverElemTemps = 0; }
    int m_maxSizeOfSchema;
    int m_sizeOfSchemas;
    int m_numSolverResults;
    int m_numSolverElemTemps;
};

extern "C" void fn_82DB0170(hkpConstraintInfo *self, const hkpConstraintInfo *other);   // hkpConstraintInfo::add

class hkpConstraintOwner : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpConstraintOwner() {}
    virtual void addConstraintToCriticalLockedIsland(hkpConstraintInstance *constraint);
    virtual void removeConstraintFromCriticalLockedIsland(hkpConstraintInstance *constraint);
    virtual void addCallbackRequest(hkpConstraintInstance *constraint, int request);
    virtual void checkAccessRw();

    hkpConstraintInfo m_constraintInfo;   // +0x8
};

class hkpDeferredConstraintOwner : public hkpConstraintOwner {
public:
    HK_FORCE_INLINE hkpDeferredConstraintOwner()
    {
        m_constraintInfo.clear();
        m_constraintAddRemoveCounter = 0;
        m_callbackRequestForAddConstraint = 0;
    }
    virtual void addConstraintToCriticalLockedIsland(hkpConstraintInstance *constraint);
    virtual void removeConstraintFromCriticalLockedIsland(hkpConstraintInstance *constraint);
    virtual void addCallbackRequest(hkpConstraintInstance *constraint, int request);

    int m_constraintAddRemoveCounter;                 // +0x18
    hkpConstraintInstance *m_constraintForCommand;    // +0x1c
    int m_callbackRequestForAddConstraint;            // +0x20
    hkFixedSizePhysicsCommandQueue<0x100> m_commandQueue;   // +0x30
};

static HK_FORCE_INLINE void queueConstraintCommand(hkpDeferredConstraintOwner &owner)
{
    if (owner.m_constraintAddRemoveCounter == 0) {
        owner.m_callbackRequestForAddConstraint = 0;
    } else if (owner.m_constraintAddRemoveCounter > 0) {
        *owner.m_commandQueue.getCurrent<hkAddConstraintToCriticalLockedIslandPhysicsCommand>() =
            hkAddConstraintToCriticalLockedIslandPhysicsCommand(owner.m_constraintForCommand, owner.m_callbackRequestForAddConstraint);
        owner.m_commandQueue.m_size += 0x10;
        owner.m_callbackRequestForAddConstraint = 0;
    } else {
        *owner.m_commandQueue.getCurrent<hkRemoveConstraintFromCriticalLockedIslandPhysicsCommand>() =
            hkRemoveConstraintFromCriticalLockedIslandPhysicsCommand(owner.m_constraintForCommand);
        owner.m_commandQueue.m_size += 0x10;
    }
}


struct hkpAgentNnTrack {
    int m_bytesUsedInLastSector;            // +0x0
    hkArray<hkpAgentNnEntry *> m_sectors;   // +0x4
    HK_FORCE_INLINE int getSectorSize(int sectorIndex) const
    {
        return (sectorIndex + 1 == m_sectors.getSize()) ? m_bytesUsedInLastSector : 0x200;
    }
};

class hkpSimulationIsland {
public:
    hkUint8 m_pad0[8];
    hkpConstraintInfo m_constraintInfo;          // +0x8
    hkUint8 m_pad1[0x58 - 0x18];
    hkpAgentNnTrack m_narrowphaseAgentTrack;     // +0x58
};

class hkpContinuousSimulation {
public:
    hkUint8 m_pad[0x100];
    hkCriticalSection m_toiQueueCriticalSection;   // +0x100
};
extern "C" void fn_82DB61C8(hkpContinuousSimulation *self, const hkpProcessCollisionOutput *output, const hkpAgentNnEntry *entry);   // addToiEvent

extern "C" void fn_82D80CB8(hkpWorld *world, hkpSimulationIsland *island);   // lock island for constraint update
extern "C" void fn_82D80CE8(hkpWorld *world, hkpSimulationIsland *island);   // unlock
extern "C" void fn_82DC9F60(hkpWorld *world, hkPhysicsCommand *begin, int size);   // hkPhysicsCommandMachineProcess

struct hkpMtThreadStructure {
    hkpWorld *m_world;                           // +0x0
    hkUint8 m_pad0[0x6c];
    hkpProcessCollisionInput m_collisionInput;   // +0x70
    hkUint8 m_pad1[0xf0 - 0x70 - sizeof(hkpProcessCollisionInput)];
    hkpContinuousSimulation *m_simulation;       // +0xf0
};

struct hkpAgentSectorHeader {
    struct JobInfo {
        hkpConstraintInfo m_constraintInfo;      // +0x0
        hkPhysicsCommandQueue m_commandQueue;    // +0x10
    };
    hkUint8 m_pad[0xc];
    JobInfo *m_jobInfos[1];                      // +0xc
};

struct hkpAgentSectorJob {
    hkUint8 m_jobSubType;            // +0x0
    hkUint8 m_pad0[0x13];
    hkpSimulationIsland *m_island;   // +0x14
    hkUint8 m_pad1[8];
    hkpAgentSectorHeader *m_header;  // +0x20
    hkInt16 m_taskIndex;             // +0x24
    hkUint16 m_pad2;
    hkUint16 m_numSectors;           // +0x28
    hkUint16 m_pad3;
    hkUint32 m_pad4;
    hkStepInfo m_stepInfo;           // +0x30
    int m_sectorIndex;               // +0x40
};

struct hkpAgentNnEntryJob {
    hkUint8 m_jobSubType;            // +0x0
    hkUint8 m_pad0[0x1f];
    hkpAgentSectorHeader *m_header;  // +0x20
    hkUint16 m_taskIndex;            // +0x24
    hkUint16 m_pad2;
    hkUint16 m_numElements;          // +0x28
    hkUint16 m_numElementsPerTask;   // +0x2a
    hkpAgentNnEntry **m_elements;    // +0x2c
    hkStepInfo m_stepInfo;           // +0x30
    hkUint8 m_collisionQualityOverride;   // +0x40
};

extern "C" void fn_82D7D528(hkpAgentNnEntry *entry, const hkpProcessCollisionInput *input, hkpProcessCollisionOutput *output, hkpContactMgr *mgr);   // hkAgentNnMachine_ProcessAgent
extern "C" int fn_82CE8E78(void *jobQueue, const void *job, void *nextJobOut, int waitStatus);   // hkJobQueue::finishJobAndGetNextJob

static HK_FORCE_INLINE void hkString_memCpy16(void *dst, const void *src, int numQuads)
{
    const hkUint32 *s = static_cast<const hkUint32 *>(src);
    hkUint32 *d = static_cast<hkUint32 *>(dst);
    for (int i = 0; i < numQuads; i++) {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        d += 4;
        s += 4;
    }
}
static HK_FORCE_INLINE void writeResults(const hkpAgentSectorJob &job, hkpDeferredConstraintOwner &owner)
{
    hkpAgentSectorHeader::JobInfo *info = job.m_header->m_jobInfos[job.m_taskIndex];
    info->m_constraintInfo = owner.m_constraintInfo;
    int size = owner.m_commandQueue.m_size;
    if (size) {
        hkString_memCpy16(info->m_commandQueue.getStart(), owner.m_commandQueue.getStart(), size >> 4);
        info->m_commandQueue.m_size = size;
    }
}

extern "C" int fn_82DC39A0(hkpMtThreadStructure &tl, void *jobQueue, hkpAgentSectorJob &nextJobOut)
{
    const hkpAgentSectorJob &job = nextJobOut;
    hkpProcessCollisionInput input(tl.m_collisionInput);
    hkpDeferredConstraintOwner owner;
    hkpProcessCollisionOutput output(&owner);
    input.m_stepInfo = job.m_stepInfo;

    if (job.m_jobSubType == 0xd) {
        hkpSimulationIsland *island = job.m_island;
        HK_TIMER_BEGIN("TtNarrowPhase");
        {
            hkpAgentNnTrack &track = island->m_narrowphaseAgentTrack;
            int sectorIndex = job.m_sectorIndex;
            int sectorsLeft = job.m_numSectors - 1;
            hkpAgentNnEntry *entry = track.m_sectors[sectorIndex];
            int sectorSize = track.getSectorSize(sectorIndex);
            hkpAgentNnEntry *end = reinterpret_cast<hkpAgentNnEntry *>(reinterpret_cast<char *>(entry) + sectorSize);
            hkpAgentNnEntry *next = entry + 1;
            hkpAgentNnEntry *nextNext = next + 1;
            if (next >= end) {
                next = HK_NULL;
                nextNext = HK_NULL;
            } else if (nextNext >= end) {
                nextNext = HK_NULL;
            }
            do {
                hkpCollidable *collA = entry->m_collidable[0];
                hkpCollidable *collB = entry->m_collidable[1];
                hkpContinuousSimulation *simulation = tl.m_simulation;
                input.m_collisionQualityInfo = input.m_dispatcher->getCollisionQualityInfo(entry->m_collisionQualityIndex);
                input.m_createPredictiveAgents = input.m_collisionQualityInfo->m_useContinuousPhysics;
                output.reset();
                fn_82D7D528(entry, &input, &output, entry->m_contactMgr);
                if (!output.isEmpty())
                    entry->m_contactMgr->processContact(*collA, *collB, input, output);
                if (output.hasToi()) {
                    hkCriticalSectionLock lock(&simulation->m_toiQueueCriticalSection);
                    fn_82DB61C8(simulation, &output, entry);
                }
                queueConstraintCommand(owner);
                owner.m_constraintAddRemoveCounter = 0;
                entry = next;
                next = nextNext;
                if (lbl_8323B520 == 1)
                    break;
                if (nextNext) {
                    nextNext++;
                    if (nextNext >= end) {
                        sectorsLeft--;
                        sectorIndex++;
                        if (sectorsLeft >= 0) {
                            nextNext = track.m_sectors[sectorIndex];
                            if (sectorsLeft > 0) {
                                const void *s = track.m_sectors[sectorIndex + 1];
                                __dcbt(0, s);
                                __dcbt(0x80, s);
                                __dcbt(0x100, s);
                                __dcbt(0x180, s);
                            }
                            sectorSize = track.getSectorSize(sectorIndex);
                            end = reinterpret_cast<hkpAgentNnEntry *>(reinterpret_cast<char *>(nextNext) + sectorSize);
                        } else {
                            nextNext = HK_NULL;
                            continue;
                        }
                    }
                    __dcbt(0, nextNext->m_contactMgr);
                    __dcbt(0, nextNext->m_collidable[0]);
                    __dcbt(0, reinterpret_cast<char *>(nextNext->m_collidable[0]) + 0xd0);
                    __dcbt(0, nextNext->m_collidable[1]);
                    __dcbt(0, reinterpret_cast<char *>(nextNext->m_collidable[1]) + 0xd0);
                }
            } while (entry);
        }
        if (job.m_header == HK_NULL) {
            if ((owner.m_constraintInfo.m_maxSizeOfSchema | owner.m_constraintInfo.m_sizeOfSchemas | owner.m_constraintInfo.m_numSolverResults | owner.m_constraintInfo.m_numSolverElemTemps) != 0 ||
                owner.m_commandQueue.m_size) {
                fn_82D80CB8(tl.m_world, island);
                fn_82DB0170(&island->m_constraintInfo, &owner.m_constraintInfo);
                hkUint32 qsize = owner.m_commandQueue.m_size;
                if (qsize)
                    fn_82DC9F60(tl.m_world, owner.m_commandQueue.getStart(), qsize);
                fn_82D80CE8(tl.m_world, island);
            }
        } else {
            writeResults(job, owner);
        }
        HK_TIMER_BEGIN("EtNarrowPhase");
    } else {
        const hkpAgentNnEntryJob &tjob = reinterpret_cast<const hkpAgentNnEntryJob &>(job);
        HK_TIMER_BEGIN("TtNarrowPhaseTOI");
        int firstElement = tjob.m_numElementsPerTask * tjob.m_taskIndex;
        int elementIndex = firstElement;
        for (int i = 0; i < tjob.m_numElements; i++, elementIndex++) {
            hkpAgentNnEntry *entry = tjob.m_elements[elementIndex];
            if (tjob.m_collisionQualityOverride) {
                input.m_collisionQualityInfo = input.m_dispatcher->getCollisionQualityInfo(7);
                input.m_createPredictiveAgents = input.m_dispatcher->getCollisionQualityInfo(entry->m_collisionQualityIndex)->m_useContinuousPhysics;
            } else {
                input.m_collisionQualityInfo = input.m_dispatcher->getCollisionQualityInfo(entry->m_collisionQualityIndex);
                input.m_createPredictiveAgents = input.m_collisionQualityInfo->m_useContinuousPhysics;
            }
            output.reset();
            fn_82D7D528(entry, &input, &output, entry->m_contactMgr);
            if (output.m_firstFreeContactPoint != &output.m_contactPoints[0])
                entry->m_contactMgr->processContact(*entry->m_collidable[0], *entry->m_collidable[1], input, output);
            if (output.hasToi()) {
                hkCriticalSectionLock lock(&tl.m_simulation->m_toiQueueCriticalSection);
                fn_82DB61C8(tl.m_simulation, &output, entry);
            }
            queueConstraintCommand(owner);
            owner.m_constraintAddRemoveCounter = 0;
            if (lbl_8323B520 == 1)
                break;
        }
        writeResults(job, owner);
        HK_TIMER_BEGIN("EtNarrowPhaseTOI");
    }
    return fn_82CE8E78(jobQueue, &nextJobOut, &nextJobOut, 0);
}
