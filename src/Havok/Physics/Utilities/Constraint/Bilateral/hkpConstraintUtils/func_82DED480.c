typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Data_82DED480 Data_82DED480;

typedef struct DataVt_82DED480 {
    void *slots[8];
    int (*getType)(Data_82DED480 *self);
} DataVt_82DED480;

struct Data_82DED480 {
    DataVt_82DED480 *vt;
};

/* hkpBallAndSocketConstraintData: m_atoms.m_pivots.m_translationA/B */
typedef struct BallSocket_82DED480 {
    char pad0[0x20];
    __vector4 translationA;
    __vector4 translationB;
} BallSocket_82DED480;

/* hkpHingeConstraintData and the other transform-based datas: m_atoms.m_transforms translations */
typedef struct Transforms_82DED480 {
    char pad0[0x50];
    __vector4 translationA;
    char pad60[0x90 - 0x60];
    __vector4 translationB;
} Transforms_82DED480;

typedef struct Instance_82DED480 {
    char pad0[0xc];
    Data_82DED480 *data;
} Instance_82DED480;

typedef struct Err_82DED480 Err_82DED480;

typedef struct ErrVt_82DED480 {
    void *slots[3];
    int (*message)(Err_82DED480 *self, int level, unsigned int id,
                   const char *text, const char *file, int line);
} ErrVt_82DED480;

struct Err_82DED480 {
    ErrVt_82DED480 *vt;
};

typedef struct Ostream_82DED480 {
    int words[4];
} Ostream_82DED480;

extern Err_82DED480 *lbl_8323B464;

extern void fn_82CEE578(Ostream_82DED480 *os, char *buf, int size);
extern void fn_82CEDB38(Ostream_82DED480 *os, const char *text);
extern void fn_82CED958(Ostream_82DED480 *os);

/* hkpConstraintUtils.cpp: copy a constraint's two pivots by constraint data type */
int fn_82DED480(Instance_82DED480 *constraint, __vector4 *pivotInA, __vector4 *pivotInB)
{
    Data_82DED480 *data = constraint->data;
    Ostream_82DED480 os;
    char buf[512];

    switch (data->vt->getType(data)) {
    case 0:
        *pivotInA = ((BallSocket_82DED480 *)data)->translationA;
        *pivotInB = ((BallSocket_82DED480 *)data)->translationB;
        break;
    case 1:
        *pivotInA = ((Transforms_82DED480 *)data)->translationA;
        *pivotInB = ((Transforms_82DED480 *)data)->translationB;
        break;
    case 2:
        *pivotInA = ((Transforms_82DED480 *)data)->translationA;
        *pivotInB = ((Transforms_82DED480 *)data)->translationB;
        break;
    case 7:
        *pivotInA = ((Transforms_82DED480 *)data)->translationA;
        *pivotInB = ((Transforms_82DED480 *)data)->translationB;
        break;
    default:
        fn_82CEE578(&os, buf, 0x200);
        fn_82CEDB38(&os, "Unsupported type of constraint in prepareSystemForRagdoll()");
        lbl_8323B464->vt->message(lbl_8323B464, 1, 0xabbabf3b, buf,
                                  ".\\Constraint\\Bilateral\\hkpConstraintUtils.cpp", 0xe2);
        fn_82CED958(&os);
        return 1;
    }
    return 0;
}
