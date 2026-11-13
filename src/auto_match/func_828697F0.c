typedef struct Obj_828697F0 {
    char pad[0xc];
    unsigned int count;
} Obj_828697F0;

extern char fn_82876698(void *self, Obj_828697F0 *o);

char fn_828697F0(void *self, Obj_828697F0 *o){ if (o->count <= 0) return fn_82876698(self, o); return 1; }
