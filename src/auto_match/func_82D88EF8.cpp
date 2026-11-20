#include "havok/hkBaseTypes.h"

struct RuntimeInfo_82D88EF8 {
    int sizeOfExternalRuntime; /* 0x0 */
    int numSolverResults;      /* 0x4 */
};

class ConstraintData_82D88EF8
{
  public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual int getType();                                                       /* 0x20 */
    virtual void getRuntimeInfo(hkBool wantRuntime, RuntimeInfo_82D88EF8 &info); /* 0x24 */
    virtual void slot28();
    virtual void slot2c();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3c();
    virtual void onAdded(); /* 0x40 */

    char pad4[0x14];
    ConstraintData_82D88EF8 *m_constraintData; /* 0x18 */
    unsigned short m_childRuntimeSize;         /* 0x1c */
    unsigned short m_childNumSolverResults;    /* 0x1e */
};

struct Action_82D88EF8 {
    char pad0[0x8];
    int m_world; /* 0x8 */
};

class ConstraintInstance_82D88EF8
{
  public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual int getType(); /* 0x18 */

    char pad4[0x8];
    ConstraintData_82D88EF8 *m_data; /* 0xc */
    char pad10[0x24];
    unsigned int m_uid; /* 0x34 */
    char pad38[0xc];
    Action_82D88EF8 *m_action; /* 0x44 */
};

struct World_82D88EF8 {
    char pad0[0x88];
    void *m_pendingOperations;                    /* 0x88 */
    int m_pendingOperationsCount;                 /* 0x8c */
    int m_pendingBodyOperationsCount;             /* 0x90 */
    int m_criticalOperationsLockCount;            /* 0x94 */
    int m_criticalOperationsLockCountForPhantoms; /* 0x98 */
    hkBool m_blockExecutingPendingOperations;     /* 0x9c */
    char pad9d[0x73];
    unsigned int m_lastConstraintUid; /* 0x110 */
};

struct PendingOperation_82D88EF8 {
    unsigned char m_type;                      /* 0x0 */
    ConstraintInstance_82D88EF8 *m_constraint; /* 0x4 */
};

extern "C" void fn_82DA6530(void *queue, PendingOperation_82D88EF8 *operation);
extern "C" void fn_82D96238(ConstraintInstance_82D88EF8 *constraint);
extern "C" ConstraintInstance_82D88EF8 *fn_82D8E938(World_82D88EF8 *world,
                                                    ConstraintInstance_82D88EF8 *constraint, int flag);
extern "C" void fn_82D888D0(World_82D88EF8 *world, Action_82D88EF8 *action);
extern "C" void fn_82DA6BA8(void *queue);

extern "C" ConstraintInstance_82D88EF8 *fn_82D88EF8(World_82D88EF8 *world,
                                                    ConstraintInstance_82D88EF8 *constraint)
{
    PendingOperation_82D88EF8 operation;
    RuntimeInfo_82D88EF8 info;

    if (world->m_criticalOperationsLockCount != 0) {
        operation.m_type = 8;
        operation.m_constraint = constraint;
        fn_82DA6530(world->m_pendingOperations, &operation);
        return 0;
    }
    if (constraint->m_data->getType() == 0xc) {
        ConstraintData_82D88EF8 *data = constraint->m_data;
        if (data->m_childRuntimeSize == 0) {
            data->m_constraintData->getRuntimeInfo(true, info);
            int runtimeSize = info.sizeOfExternalRuntime;
            int numSolverResults = info.numSolverResults;
            data->m_childNumSolverResults = numSolverResults;
            data->m_childRuntimeSize = runtimeSize;
        }
    }
    world->m_blockExecutingPendingOperations = true;
    fn_82D96238(constraint);
    constraint->m_uid = ++world->m_lastConstraintUid;
    ConstraintInstance_82D88EF8 *result = fn_82D8E938(world, constraint, 1);
    if (constraint->getType() == 1) {
        if (constraint->m_action->m_world == 0) {
            fn_82D888D0(world, constraint->m_action);
        }
        constraint->m_data->onAdded();
    }
    int locked = world->m_criticalOperationsLockCount;
    world->m_blockExecutingPendingOperations = false;
    if (locked == 0 && world->m_pendingOperationsCount != 0) {
        world->m_pendingOperationsCount = 0;
        fn_82DA6BA8(world->m_pendingOperations);
    }
    return result;
}
