class hkpCollisionAgent;
class hkpCdBody;
struct hkpCollisionInput;
class hkpContactMgr;
class hkpListAgent;

class hkBool
{
public:
    hkBool() {}
    hkBool(bool b) { m_bool = static_cast<char>(b); }
    operator bool() const { return m_bool != 0; }
    hkBool &operator=(bool e) { m_bool = static_cast<char>(e); return *this; }
    char m_bool;
};

template <class T>
class hkpSymmetricAgent
{
public:
    static hkpCollisionAgent *createAgent(const hkpCdBody &bodyA,
                                          const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input,
                                          hkpContactMgr *mgr);
};

extern "C" int fn_82D6BE30();
extern "C" int fn_82D6C100();
extern "C" int fn_82D6C3E0();

typedef hkpCollisionAgent *(*CreateFunc_82D5FC90)(const hkpCdBody &, const hkpCdBody &,
                                                  const hkpCollisionInput &, hkpContactMgr *);
typedef int (*AgentFunc_82D5FC90)();

struct AgentFuncs_82D5FC90
{
    CreateFunc_82D5FC90 m_createFunc;
    AgentFunc_82D5FC90 m_getPenetrationsFunc;
    AgentFunc_82D5FC90 m_getClosestPointFunc;
    AgentFunc_82D5FC90 m_linearCastFunc;
    hkBool m_isFlipped;
    hkBool m_isPredictive;
};

extern "C" void fn_82D5FC90(AgentFuncs_82D5FC90 &af)
{
    af.m_createFunc = hkpSymmetricAgent<hkpListAgent>::createAgent;
    af.m_getPenetrationsFunc = fn_82D6C3E0;
    af.m_getClosestPointFunc = fn_82D6BE30;
    af.m_linearCastFunc = fn_82D6C100;
    af.m_isFlipped = true;
    af.m_isPredictive = true;
}
