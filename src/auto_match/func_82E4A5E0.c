typedef struct Obj_82E4A5E0 { struct { int f0; void (*f4)(struct Obj_82E4A5E0 *); void (*f8)(struct Obj_82E4A5E0 *); } *vt; int pad[15]; unsigned int f40; } Obj_82E4A5E0;
typedef struct Self_82E4A5E0 { char pad[0x58]; char lock[0x44]; int f9c; char pad2[0x28]; unsigned __int64 fc8; } Self_82E4A5E0;
extern void fn_82E50CB8(void *);
extern void fn_82E50F10(void *);
extern unsigned int fn_82E50BE8(int, int, int, int, int);
extern Obj_82E4A5E0 *fn_82E49568(unsigned int, int, int, unsigned int, unsigned int);
extern int fn_82E4A178(Self_82E4A5E0 *, unsigned int, unsigned int, int, Obj_82E4A5E0 *);
extern int fn_82E4A558(Obj_82E4A5E0 *);

int fn_82E4A5E0(Self_82E4A5E0 *self, unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    int hr;
    Obj_82E4A5E0 *obj;
    unsigned int m;
    obj = 0;
    fn_82E50CB8(self->lock);
    if (a == 0 || c == 0) {
        hr = 0x80070057;
join:
        if (hr >= 0) goto unlock;
    } else {
        if (self->f9c == -1) {
            hr = 0xc00d36b2;
            goto unlock;
        }
        m = fn_82E50BE8(100, 0, 0, 0, 0);
        obj = m ? fn_82E49568(m, 1, 0, c, d) : 0;
        if (obj == 0) {
            hr = 0x8007000e;
            goto unlock;
        }
        obj->vt->f4(obj);
        hr = fn_82E4A178(self, a, b, 0, obj);
        if (hr >= 0 && (hr = fn_82E4A558(obj)) >= 0) {
            self->fc8 = obj->f40 + self->fc8;
            goto join;
        }
    }
    if (obj != 0) {
        obj->vt->f8(obj);
    }
unlock:
    fn_82E50F10(self->lock);
    return hr;
}
