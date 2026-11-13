typedef struct Pair_8286DCA0 {
    char first[0x1c];
    char second[0x1c];   /* 0x1c */
} Pair_8286DCA0;

typedef struct Obj_8286DCA0 {
    int pad0;
    Pair_8286DCA0 pair;  /* 0x04 */
} Obj_8286DCA0;

extern void fn_82230300(void *p, int a, int b);

void fn_8286DCA0(void *self, Obj_8286DCA0 *o)
{
    Pair_8286DCA0 *pair = &o->pair;

    fn_82230300(pair->second, 1, 0);
    fn_82230300(pair->first, 1, 0);
}
