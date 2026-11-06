typedef struct { char pad[16]; unsigned __int64 flags; char pad2[16]; unsigned __int64 other; char pad3[0x2abf-0x30]; unsigned char mode; char pad4[0x2efc-0x2ac0]; unsigned state; } Object_82639238;
void fn_82639238(Object_82639238 *p,unsigned mode) {
 p->state=(mode&7)<<17 | (p->state&0xfff1ffff);
 if(!(p->mode&0x20) && (p->state&0xe0000)==0x40000) p->other &= ~0x100ULL;
 else p->other |= 0x100;
 p->flags |= 0x100;
}
