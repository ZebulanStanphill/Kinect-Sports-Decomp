typedef struct Obj_8277DD60 {
    char pad0[0x8];
    unsigned char f08; /* 0x8 */
    char pad9[0x27];
    int f30; /* 0x30 */
    char pad34[0xc];
    int f40; /* 0x40 */
    char pad44[0xc];
    int f50; /* 0x50 */
    char pad54[0xc];
    int f60; /* 0x60 */
    char pad64[0x10];
    int f74; /* 0x74 */
    char pad78[0x4];
    int f7c; /* 0x7c */
    char pad80[0x58];
    int fd8; /* 0xd8 */
    int fdc; /* 0xdc */
    float fe0; /* 0xe0 */
    float fe4; /* 0xe4 */
    float fe8; /* 0xe8 */
    float fec; /* 0xec */
    char padf0[0x14];
    int f104; /* 0x104 */
    char pad108[0x4c];
    int f154; /* 0x154 */
    char pad158[0xc];
    int f164; /* 0x164 */
    char pad168[0xc];
    int f174; /* 0x174 */
    char pad178[0xc];
    int f184; /* 0x184 */
} Obj_8277DD60;

extern float lbl_82015514[];

void fn_8277DD60(Obj_8277DD60 *o)
{
    float a, b;

    o->f30 = 0;
    o->f40 = 0;
    a = lbl_82015514[0];
    o->f50 = 0;
    o->fe8 = a;
    o->f60 = 0;
    b = lbl_82015514[1];
    o->f74 = 0;
    o->fe0 = b;
    o->f7c = 0;
    o->fe4 = b;
    o->f104 = 0;
    o->fec = a;
    o->f154 = 0;
    o->f164 = 0;
    o->f174 = 0;
    o->f184 = 0;
    o->fd8 = 0;
    o->fdc = 0;
    o->f08 = 0;
}
