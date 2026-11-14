typedef struct Obj_82DED570 Obj_82DED570;

typedef struct ObjVt_82DED570 {
    void *slots[8];
    int (*getType)(Obj_82DED570 *self);
} ObjVt_82DED570;

struct Obj_82DED570 {
    ObjVt_82DED570 *vt;
    int pad[0x2b];
    void *motor;
};

typedef struct Err_82DED570 Err_82DED570;

typedef struct ErrVt_82DED570 {
    void *slots[3];
    int (*message)(Err_82DED570 *self, int level, unsigned int id,
                   const char *text, const char *file, int line);
} ErrVt_82DED570;

struct Err_82DED570 {
    ErrVt_82DED570 *vt;
};

typedef struct Ostream_82DED570 {
    int words[4];
} Ostream_82DED570;

extern Err_82DED570 *lbl_8323B464;

extern void fn_82CEE578(Ostream_82DED570 *os, char *buf, int size);
extern void fn_82CEDB38(Ostream_82DED570 *os, const char *text);
extern void fn_82CED958(Ostream_82DED570 *os);
extern void *fn_82D97698(Obj_82DED570 *self);
extern void *fn_82D97748(Obj_82DED570 *self);
extern void *fn_82D977A8(Obj_82DED570 *self);

int fn_82DED570(Obj_82DED570 *data, void **motor0, void **motor1, void **motor2)
{
    Ostream_82DED570 os;
    char buf[512];

    switch (data->vt->getType(data)) {
    case 2:
        *motor0 = data->motor;
        *motor1 = 0;
        *motor2 = 0;
        break;
    case 7:
        *motor0 = fn_82D97698(data);
        *motor1 = fn_82D97748(data);
        *motor2 = fn_82D977A8(data);
        break;
    default:
        *motor2 = 0;
        *motor1 = 0;
        *motor0 = 0;
        fn_82CEE578(&os, buf, 0x200);
        fn_82CEDB38(&os, "This type of constraint does not have motors");
        lbl_8323B464->vt->message(lbl_8323B464, 1, 0xabbae233, buf,
                                  ".\\Constraint\\Bilateral\\hkpConstraintUtils.cpp", 0x104);
        fn_82CED958(&os);
        return 1;
    }
    return 0;
}
