extern int KeSetEvent(void *, int, unsigned char);
typedef struct { char pad[0x3c]; char event[0x18]; unsigned count; unsigned unused; unsigned data[4]; } Queue_8264EF18;
int fn_8264EF18(void *unused, Queue_8264EF18 *p, unsigned value) {
 p->data[p->count & 3] = value;
 p->count++;
 return KeSetEvent(p->event, 1, 0);
}
