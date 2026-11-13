struct Vec_82660278 { int first, last, end; int al; };
extern void *fn_82F93778(void *dst, void *src);
struct Vec_82660278 *fn_82660278(struct Vec_82660278 *self, void *al) {
 fn_82F93778(&self->al, al);
 self->first = 0;
 self->last = 0;
 self->end = 0;
 return self;
}
