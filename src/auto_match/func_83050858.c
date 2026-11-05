typedef struct Cfg_83050858 { char pad[0x84]; unsigned lim; float scale; } Cfg_83050858;
typedef struct Obj_83050858 { char pad[0x60]; Cfg_83050858 *cfg; char pad2[0x88 - 0x64]; float f88; } Obj_83050858;

unsigned char fn_83050858(Obj_83050858 *o, unsigned n)
{
  return n < o->cfg->lim || (float)n < o->cfg->scale * o->f88;
}
