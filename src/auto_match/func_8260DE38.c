typedef struct Module_8260DE38 Module_8260DE38;

typedef void (*ModuleFn_8260DE38)(Module_8260DE38 *module);

struct Module_8260DE38 {
    int first;                    /* 0x000 */
    Module_8260DE38 *next;        /* 0x004 */
    int kind;                     /* 0x008 */
    unsigned int flags;           /* 0x00C */
    char state[0x160];            /* 0x010 */
    int unk170;                   /* 0x170 */
    int unk174;                   /* 0x174 */
    ModuleFn_8260DE38 release;    /* 0x178 */
    ModuleFn_8260DE38 start;      /* 0x17C */
    ModuleFn_8260DE38 handler180; /* 0x180 */
    ModuleFn_8260DE38 handler184; /* 0x184 */
    ModuleFn_8260DE38 handler188; /* 0x188 */
    ModuleFn_8260DE38 handler18C; /* 0x18C */
    ModuleFn_8260DE38 handler190; /* 0x190 */
    ModuleFn_8260DE38 handler194; /* 0x194 */
    ModuleFn_8260DE38 handler198; /* 0x198 */
};

extern void *fn_82522D98(unsigned int size);
extern void *XMemSet(void *data, int value, unsigned int size);
extern void fn_8260B6C8(void *state);
extern void fn_8260DF78(Module_8260DE38 *module);
extern void fn_8260DDC8(Module_8260DE38 *module);
extern void fn_8260DF88(Module_8260DE38 *module);
extern void fn_82D7E470(Module_8260DE38 *module);
extern void fn_82BA02A8(Module_8260DE38 *module);
extern void fn_8260DF98(Module_8260DE38 *module);
extern void fn_8260DFA0(Module_8260DE38 *module);
extern void fn_8260DFB0(Module_8260DE38 *module);
extern void fn_8260E070(Module_8260DE38 *module);

void fn_8260DE38(Module_8260DE38 **out)
{
    Module_8260DE38 *module;

    *out = (Module_8260DE38 *)fn_82522D98(0x19c);
    XMemSet(*out, 0, 0x19c);
    (*out)->flags |= 1;
    (*out)->kind = 4;
    (*out)->unk170 = 0;
    {
        Module_8260DE38 *created = *out;
        created->first = 0;
        created->next = 0;
    }
    fn_8260B6C8((*out)->state);
    (*out)->release = fn_8260DF78;
    (*out)->start = fn_8260DDC8;
    (*out)->handler180 = fn_8260DF88;
    (*out)->handler184 = fn_82D7E470;
    (*out)->handler188 = fn_82BA02A8;
    (*out)->handler18C = fn_8260DF98;
    (*out)->handler190 = fn_8260DFA0;
    (*out)->handler194 = fn_8260DFB0;
    (*out)->handler198 = fn_8260E070;
    for (module = *out; module != 0; module = module->next) {
        module->start(module);
    }
}
