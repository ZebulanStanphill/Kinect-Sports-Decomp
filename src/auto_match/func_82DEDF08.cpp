// hkpPoweredChainMapper::buildChainMapper (Physics/Utilities/Constraint/Chain/hkpPoweredChainMapper.cpp): builds
// a powered chain for each entity pair from the given constraints and records, per constraint (link), which chains
// and chain entries it maps to. On failure it warns, releases what it built and returns HK_NULL. Built with /O2
// (flag file). The function keeps its fn_ name; every callee keeps its fn_ name too.
#include "havok/hkBase.h"

class hkpEntity;
class hkpPoweredChainData;

inline void *operator new(hk_size_t, void *p) throw() { return p; }

extern "C" {
void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int numElem, int sizeElem);   // hkArrayUtil::_reserve
void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int sizeElem);                // hkArrayUtil::_reserveMore
void fn_82CEA160(void *map, hkMemoryAllocator *alloc, hkUlong key, hkUlong val);      // hkMapBase<hkUlong, hkUlong>::insert
int fn_82CEA220(const void *map, hkUlong key);                                         // hkMapBase<hkUlong, hkUlong>::findKey
}

// The hkArray members the function inlines (Common/Base/Container/Array/hkArray.inl), which the shared header
// does not declare. constructWithCopy matters: storing through m_data[m_size] directly changes the register
// allocation of the whole function.
template <typename T>
static HK_FORCE_INLINE void constructPod(T *t, int n)
{
}

template <typename T>
static HK_FORCE_INLINE void constructClass(T *t, int n)
{
    for (int i = 0; i < n; ++i)
        ::new (static_cast<void *>(t + i)) T;
}

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        t[i] = tcopy;
}

template <typename T>
static HK_FORCE_INLINE void arrayReserve(hkArrayBase<T> &a, hkMemoryAllocator &alloc, int n)
{
    const int capacity = a.getCapacity();
    if (capacity < n)
    {
        int cap2 = 2 * capacity;
        int newSize = (n < cap2) ? cap2 : n;
        fn_82CE6310(&alloc, &a, newSize, sizeof(T));
    }
}

// setSize for element types without (setSizePod) and with (setSizeClass) a constructor.
template <typename T>
static HK_FORCE_INLINE void arraySetSizePod(hkArrayBase<T> &a, int n)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&a);
    arrayReserve(a, alloc, n);
    constructPod(a.m_data + a.m_size, n - a.m_size);
    a.m_size = n;
}

template <typename T>
static HK_FORCE_INLINE void arraySetSizeClass(hkArrayBase<T> &a, int n)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&a);
    arrayReserve(a, alloc, n);
    constructClass(a.m_data + a.m_size, n - a.m_size);
    a.m_size = n;
}

template <typename T>
static HK_FORCE_INLINE void arrayPushBack(hkArrayBase<T> &a, const T &t)
{
    hkMemoryRouter *router = hkMemoryRouter::getInstancePtr();
    if (a.m_size == a.getCapacity())
        fn_82CE63B0(&router->heap(), &a, sizeof(T));
    constructWithCopy(a.m_data + a.m_size, 1, t);
    a.m_size++;
}

template <typename T>
static HK_FORCE_INLINE T &arrayExpandOne(hkArrayBase<T> &a)
{
    hkMemoryRouter *router = hkMemoryRouter::getInstancePtr();
    if (a.m_size == a.getCapacity())
        fn_82CE63B0(&router->heap(), &a, sizeof(T));
    return a.m_data[a.m_size++];
}

// hkPointerMap<KEY, VAL> (Common/Base/Container/PointerMap/hkPointerMap.h) over hkMap<hkUlong, hkUlong>: the
// constructor reserves 0 elements (fn_82CEAB00), the destructor is clearAndDeallocate plus ~hkMapBase.
template <typename KEY, typename VAL>
class hkPointerMapLookup {
public:
    typedef int Iterator;
    HK_FORCE_INLINE void insert(KEY key, VAL val)
    {
        fn_82CEA160(&m_map, &hkContainerHeapAllocator::get(this), hkUlong(key), hkUlong(val));
    }
    HK_FORCE_INLINE Iterator findKey(KEY key) const { return fn_82CEA220(&m_map, hkUlong(key)); }
    HK_FORCE_INLINE hkBool isValid(Iterator it) const { return it <= m_map.m_hashMod; }
    HK_FORCE_INLINE VAL getValue(Iterator it) const { return VAL(m_map.m_elem[it].val); }

    hkMap<hkUlong, hkUlong> m_map;
};

// hkErrStream keeps its fn_ constructor and destructor. HK_WARN calls the constructor directly: through an inline
// wrapper constructor taking the buffer, the compiler stops sharing one stack slot between the four message
// buffers (the streams themselves get one slot each, as in the original).
class hkErrStream;
extern "C" {
hkErrStream *fn_82CEE578(hkErrStream *self, void *buf, int bufSize);   // hkErrStream::hkErrStream(void *, int)
void *fn_82CEDB38(void *self, const char *s);                          // hkOstream::operator<<(const char *)
void fn_82CED958(void *self);                                          // hkErrStream::~hkErrStream
}

class hkErrStream {
public:
    HK_FORCE_INLINE ~hkErrStream() { fn_82CED958(this); }
    HK_FORCE_INLINE hkErrStream &operator<<(const char *s)
    {
        fn_82CEDB38(this, s);
        return *this;
    }

    char m_data[0xc];
};

class hkError : public hkReferencedObject {
public:
    enum Message { MESSAGE_REPORT, MESSAGE_WARNING, MESSAGE_ASSERT, MESSAGE_ERROR };
    virtual int message(Message m, int id, const char *description, const char *file, int line);   // +0xc
    static HK_FORCE_INLINE hkError &getInstance();
};
extern "C" hkError *lbl_8323B464;   // hkSingleton<hkError>::s_instance
HK_FORCE_INLINE hkError &hkError::getInstance() { return *lbl_8323B464; }

// Havok's HK_WARN, with the source line passed explicitly.
#define HK_WARN(id, TEXT, LINE)                                                                          \
    {                                                                                                    \
        char assertBuf[512];                                                                             \
        hkErrStream ostr;                                                                                \
        fn_82CEE578(&ostr, assertBuf, sizeof(assertBuf));                                                \
        ostr << TEXT;                                                                                    \
        hkError::getInstance().message(hkError::MESSAGE_WARNING, id, assertBuf,                          \
                                       ".\\Constraint\\Chain\\hkpPoweredChainMapper.cpp", LINE);         \
    }

enum hkResult { HK_SUCCESS = 0, HK_FAILURE = 1 };

class hkpConstraintData : public hkReferencedObject {
public:
    enum ConstraintType { CONSTRAINT_TYPE_POWERED_CHAIN = 102 };
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int getType() const;   // +0x20
};

class hkpConstraintInstance : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpConstraintData *getData() const { return m_data; }

    void *m_owner;              // +0x8
    hkpConstraintData *m_data;  // +0xc
};

class hkpConstraintChainInstance : public hkpConstraintInstance {};

extern "C" {
// hkpConstraintChainUtil::findConstraintLinkBetweenEntities
int fn_82DF6050(const hkArray<hkpConstraintInstance *> &allConstraints, hkpEntity *entityA, hkpEntity *entityB,
                hkArray<hkpEntity *> &entitiesOut, hkArray<hkpConstraintInstance *> &constraintsOut);
// hkpConstraintChainUtil::buildPoweredChain
hkpConstraintChainInstance *fn_82DF5950(hkArray<hkpConstraintInstance *> &constraints, hkBool cloneMotors);
// creates the limit constraint for a link's constraint (static in this file)
hkpConstraintInstance *fn_82DED240(hkpConstraintInstance *constraint);
}

class hkpPoweredChainMapper : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpPoweredChainMapper() {}
    virtual ~hkpPoweredChainMapper();

    struct Config {
        hkBool m_createLimitConstraints;
        hkBool m_cloneMotors;
    };
    struct ChainEndpoints {
        hkpEntity *m_start;
        hkpEntity *m_end;
    };
    struct LinkInfo {
        LinkInfo() : m_firstTargetIdx(-1), m_numTargets(0), m_limitConstraint(HK_NULL) {}
        int m_firstTargetIdx;
        int m_numTargets;
        hkpConstraintInstance *m_limitConstraint;
    };
    struct Target {
        hkpPoweredChainData *m_chain;
        int m_infoIndex;
    };

    hkArray<LinkInfo> m_links;                       // +0x8
    hkArray<Target> m_targets;                       // +0x14
    hkArray<hkpConstraintChainInstance *> m_chains;  // +0x20
};

// A target before the targets are sorted by link.
struct hkpPoweredChainMapperTmpTarget {
    hkpPoweredChainMapper::Target m_target;
    int m_linkIndex;
};

extern "C" hkpPoweredChainMapper *fn_82DEDF08(const hkpPoweredChainMapper::Config config,
                                              const hkArray<hkpConstraintInstance *> &allConstraints,
                                              const hkArray<hkpPoweredChainMapper::ChainEndpoints> &pairs,
                                              hkArray<hkpConstraintInstance *> *unusedConstraintsOut)
{
    typedef hkpPoweredChainMapper::LinkInfo LinkInfo;

    hkpPoweredChainMapper *mapper = new hkpPoweredChainMapper();

    hkArray<hkpPoweredChainMapperTmpTarget> tmpTargets;
    hkArray<int> targetsPerLink;
    arraySetSizePod(targetsPerLink, allConstraints.getSize());
    hkString::memSet(targetsPerLink.begin(), 0, targetsPerLink.getSize() * sizeof(int));

    hkPointerMapLookup<hkpConstraintInstance *, int> constraintToIndex;
    for (int i = 0; i < allConstraints.getSize(); i++)
        constraintToIndex.insert(allConstraints[i], i);

    arraySetSizeClass(mapper->m_links, allConstraints.getSize());
    hkString::memSet(mapper->m_links.begin(), 0, mapper->m_links.getSize() * sizeof(LinkInfo));

    for (int p = 0; p < pairs.getSize(); p++)
    {
        hkArray<hkpEntity *> entities;
        hkArray<hkpConstraintInstance *> constraints;
        hkResult res = (hkResult)fn_82DF6050(allConstraints, pairs[p].m_start, pairs[p].m_end, entities, constraints);
        if (res == HK_FAILURE)
        {
            HK_WARN(0xabbaaa88, "Cannot find a chain of constraints linking one of the entity pairs.", 68);
            mapper->removeReference();
            return HK_NULL;
        }

        hkpConstraintChainInstance *chain = fn_82DF5950(constraints, config.m_cloneMotors);
        if (!chain)
        {
            HK_WARN(0xabbaddaa, "Failed to build a chain.", 78);
            mapper->removeReference();
            return HK_NULL;
        }
        arrayPushBack(mapper->m_chains, chain);

        for (int c = 0; c < constraints.getSize(); c++)
        {
            hkPointerMapLookup<hkpConstraintInstance *, int>::Iterator it = constraintToIndex.findKey(constraints[c]);
            if (!constraintToIndex.isValid(it))
            {
                HK_WARN(0xabba99dd, "Internal error.", 93);
                chain->removeReference();
                mapper->removeReference();
                return HK_NULL;
            }
            int linkIndex = constraintToIndex.getValue(it);
            LinkInfo &link = mapper->m_links[linkIndex];

            hkpPoweredChainMapperTmpTarget &target = arrayExpandOne(tmpTargets);
            target.m_linkIndex = linkIndex;
            targetsPerLink[linkIndex]++;

            if (chain->getData()->getType() != hkpConstraintData::CONSTRAINT_TYPE_POWERED_CHAIN)
            {
                HK_WARN(0xabba9d6d, "Internal error; invalid chain type.", 108);
                chain->removeReference();
                mapper->removeReference();
                return HK_NULL;
            }
            target.m_target.m_chain = (hkpPoweredChainData *)chain->getData();
            target.m_target.m_infoIndex = c;

            if (config.m_createLimitConstraints && !link.m_limitConstraint)
                link.m_limitConstraint = fn_82DED240(constraints[c]);
        }
    }

    // Each link's targets are contiguous: first index and count.
    int numTargets = 0;
    for (int i = 0; i < mapper->m_links.getSize(); i++)
    {
        mapper->m_links[i].m_firstTargetIdx = numTargets;
        numTargets += targetsPerLink[i];
        mapper->m_links[i].m_numTargets = 0;
    }
    arraySetSizePod(mapper->m_targets, numTargets);

    for (int t = 0; t < tmpTargets.getSize(); t++)
    {
        const hkpPoweredChainMapperTmpTarget &tmp = tmpTargets[t];
        LinkInfo &link = mapper->m_links[tmp.m_linkIndex];
        mapper->m_targets[link.m_firstTargetIdx + link.m_numTargets] = tmp.m_target;
        link.m_numTargets++;
    }

    if (unusedConstraintsOut)
    {
        for (int i = 0; i < mapper->m_links.getSize(); i++)
        {
            if (mapper->m_links[i].m_numTargets == 0)
                arrayPushBack(*unusedConstraintsOut, allConstraints[i]);
        }
    }

    return mapper;
}
