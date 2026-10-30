typedef __declspec(passinreg) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
typedef struct { char pad[0x214]; int flag; } Source;
typedef struct { char pad[0x1e4]; void *target; } State;
typedef struct { char pad[0xc]; Source *source; State *state; } Self;
extern void fn_822B6A58(__vector4 *, Source *, int);
extern void fn_823AFE00(void *, __vector4);
void fn_822F1228(Self *p) {
 void *target = p->state->target;
 if (target) { __vector4 v; fn_822B6A58(&v, p->source, 0x20 + ((p->source->flag == 0) ^ 1)); fn_823AFE00(target, v); }
}
