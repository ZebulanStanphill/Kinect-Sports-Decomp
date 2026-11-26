#ifndef HAVOK_HKPCOLLISIONDISPATCHER_H
#define HAVOK_HKPCOLLISIONDISPATCHER_H

#include "havok/hkBase.h"
#include "havok/hkpCdBody.h"
#include "havok/hkpCollisionInput.h"

class hkpCollisionAgent;
class hkpCollisionDispatcher;
class hkpContactMgr;
class hkpContactMgrFactory;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
struct hkpLinearCastCollisionInput;

// hkpCollisionQualityInfo (0x40 bytes): the settings for one pair of collidable quality types. Only the two
// members the game's code is seen to read are named: the agent sector job (82DC39A0) tests
// m_useContinuousPhysics, and hkpSimpleConstraintContactMgr's constructor (82DAC350) takes the
// constraint priority.
struct hkpCollisionQualityInfo {
    hkUint8 m_members0[0x10];          // +0x0
    hkUint32 m_useContinuousPhysics;   // +0x10
    hkUint8 m_members14[0x28];         // +0x14
    hkUint16 m_constraintPriority;     // +0x3C
    hkUint8 m_pad3E[2];                // +0x3E
};

// hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.h), 0x1E40 bytes.
// The layout is the game's:
//  - the constructor (82D596C0) stores its first argument at +0x8, fills the 8x8 table at +0xC with its
//    second (adding a reference each time), writes the 32 masks 1 << i at +0x110, clears the two hkBools
//    of 64 AgentFuncs from +0x9A0 and parts of 16 entries of 0x50 bytes from +0x16B0, the counts at +0x190
//    (through resetCreationFunctions) and +0xEA0, the flags at +0x1E20..+0x1E23 (the last is set to true) and the
//    four pointers from +0x1E30;
//  - the destructor (82D597D8) releases the 8x8 table and destroys the hkArray at +0x1E24;
//  - getNewCollisionAgent reads the 32x32 agent type tables at +0x1A0 and +0x5A0 (predictive) and the
//    0x14-byte AgentFuncs; 82DAC350 and 82DC39A0 read the quality table at +0x1BB0 and the quality infos
//    at +0x1C20; debugPrintTable (82D59888) reads the two tables at +0x1E30 and +0x1E34;
//  - resetCreationFunctions (82D585E0) sets both counts to 1, clears the four type tables (+0x1A0, +0x5A0, +0xEB0, +0x12B0),
//    fills the first AgentFuncs and the first agent 3 entry, and sets the priority of every cell of the
//    four debug tables (0xC00 bytes each) to 100; disableDebugging (82D58828) frees those tables.
// The member names follow Havok's header. The type tables and the quality infos start on 16-byte
// boundaries, with unused bytes before them.
class hkpCollisionDispatcher : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum {
        HK_MAX_RESPONSE_TYPE = 8,
        HK_MAX_SHAPE_TYPE = 32,
        HK_MAX_AGENT2_TYPES = 64,
        HK_MAX_AGENT3_TYPES = 16,
        HK_MAX_COLLISION_QUALITIES = 8,
        HK_COLLIDABLE_QUALITY_MAX = 10
    };
    typedef hkpCollisionAgent *(HK_CALL *CreateFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                     const hkpCollisionInput &input, hkpContactMgr *mgr);
    typedef void (HK_CALL *GetPenetrationsFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
    typedef void (HK_CALL *GetClosestPointsFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                 const hkpCollisionInput &input, hkpCdPointCollector &collector);
    typedef void (HK_CALL *LinearCastFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                           const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                           hkpCdPointCollector *startCollector);
    typedef hkInt8 CollisionQualityIndex;

    // 0x14 bytes. The three query functions have the signatures of hkpSymmetricAgent's statics, which
    // the agents' registerAgent functions store here.
    struct AgentFuncs {
        AgentFuncs() : m_isFlipped(false), m_isPredictive(false) {}

        CreateFunc m_createFunc;                      // +0x0
        GetPenetrationsFunc m_getPenetrationsFunc;    // +0x4
        GetClosestPointsFunc m_getClosestPointFunc;   // +0x8
        LinearCastFunc m_linearCastFunc;              // +0xC
        hkBool m_isFlipped;                           // +0x10
        hkBool m_isPredictive;                        // +0x11
    };

    // 0x50 bytes: the functions of an hkpAgent3 type. The constructor clears the three hkBools at +0x30
    // and then the five pointers from +0x18; nothing else of it is known.
    struct Agent3FuncsIntern {
        Agent3FuncsIntern()
        {
            m_flags[0] = 0;
            m_flags[1] = 0;
            m_flags[2] = 0;
            m_funcs18[0] = HK_NULL;
            m_funcs18[1] = HK_NULL;
            m_funcs18[2] = HK_NULL;
            m_funcs18[3] = HK_NULL;
            m_funcs18[4] = HK_NULL;
        }

        void *m_funcs0[6];        // +0x0
        void *m_funcs18[5];       // +0x18
        void *m_func2C;           // +0x2C
        hkUint8 m_flags[3];       // +0x30
        hkUint8 m_rest[0x1D];     // +0x33
    };

    // 8 bytes: one registerAlternateShapeTypes entry.
    struct ShapeInheritance {
        hkUint32 m_primaryType;
        hkUint32 m_alternateType;
    };

    // One cell of a debug table: which registration filled the pair of shape types, and its priority
    // (debugPrintTable prints the cells whose priority is below 100).
    struct DebugEntry {
        hkInt8 m_typeA;
        hkInt8 m_typeB;
        hkInt8 m_priority;
    };

    // The constructor's symbol in the game's symbol list has these parameter types; in Havok they are a
    // CreateFunc and an hkpContactMgrFactory *.
    hkpCollisionDispatcher(void *defaultCollisionAgent, hkReferencedObject *defaultContactMgrFactory);
    virtual ~hkpCollisionDispatcher();   // out of line (82D597D8)

    HK_FORCE_INLINE hkpCollisionAgent *getNewCollisionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr) const
    {
        int typeA = bodyA.getShape()->m_type;
        int typeB = bodyB.getShape()->m_type;
        const hkUint8 (*table)[HK_MAX_SHAPE_TYPE] = input.m_createPredictiveAgents ? m_agent2TypesPred : m_agent2Types;
        int agentType = table[typeA][typeB];
        CreateFunc f = m_agent2Func[agentType].m_createFunc;
        return f(bodyA, bodyB, input, mgr);
    }
    HK_FORCE_INLINE GetClosestPointsFunc getGetClosestPointsFunc(hkpShapeType typeA, hkpShapeType typeB) const
    {
        int idx = m_agent2Types[typeA][typeB];
        return m_agent2Func[idx].m_getClosestPointFunc;
    }
    // Out of line. debugPrintTable's name is the game's (its report section string); the other two are
    // Havok's, chosen by what the functions do and where the constructor and the destructor call them.
    void resetCreationFunctions();   // 82D585E0
    void debugPrintTable();          // 82D59888
    void disableDebugging();         // 82D58828
    CollisionQualityIndex getCollisionQualityIndex(hkInt8 a, hkInt8 b) { return m_collisionQualityTable[a][b]; }
    hkpCollisionQualityInfo *getCollisionQualityInfo(CollisionQualityIndex index)
    {
        return &m_collisionQualityInfo[index];
    }

    void *m_defaultCollisionAgent;                                                           // +0x8
    hkpContactMgrFactory *m_contactMgrFactory[HK_MAX_RESPONSE_TYPE][HK_MAX_RESPONSE_TYPE];   // +0xC
    hkUint32 m_pad10C;                                                                       // +0x10C
    hkUint32 m_hasAlternateType[HK_MAX_SHAPE_TYPE];                                          // +0x110
    int m_numAgent2Types;                                                                    // +0x190
    hkUint8 m_pad194[0xC];                                                                   // +0x194
    hkUint8 m_agent2Types[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];                             // +0x1A0
    hkUint8 m_agent2TypesPred[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];                         // +0x5A0
    AgentFuncs m_agent2Func[HK_MAX_AGENT2_TYPES];                                            // +0x9A0
    int m_numAgent3Types;                                                                    // +0xEA0
    hkUint8 m_padEA4[0xC];                                                                   // +0xEA4
    hkUint8 m_agent3Types[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];                             // +0xEB0
    hkUint8 m_agent3TypesPred[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];                         // +0x12B0
    Agent3FuncsIntern m_agent3Func[HK_MAX_AGENT3_TYPES];                                     // +0x16B0
    hkInt8 m_collisionQualityTable[HK_COLLIDABLE_QUALITY_MAX][HK_COLLIDABLE_QUALITY_MAX];    // +0x1BB0
    hkUint8 m_pad1C14[0xC];                                                                  // +0x1C14
    hkpCollisionQualityInfo m_collisionQualityInfo[HK_MAX_COLLISION_QUALITIES];              // +0x1C20
    hkBool m_collisionAgentRegistered;                                                       // +0x1E20
    hkBool m_agent3Registered;                                                               // +0x1E21
    hkBool m_midphaseAgent3Registered;                                                       // +0x1E22
    hkBool m_checkEnabled;                                                                   // +0x1E23
    hkArray<ShapeInheritance> m_shapeInheritance;                                            // +0x1E24
    DebugEntry *m_debugAgent2Table;        // +0x1E30: 32 x 32 entries
    DebugEntry *m_debugAgent2TablePred;    // +0x1E34: 32 x 32 entries
    DebugEntry *m_debugAgent3Table;        // +0x1E38
    DebugEntry *m_debugAgent3TablePred;    // +0x1E3C
};

#endif
