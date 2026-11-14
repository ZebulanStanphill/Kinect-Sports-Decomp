typedef struct ListHdr_8288BC38 { int f0; int f4; unsigned int count; } ListHdr_8288BC38;
typedef struct List_8288BC38 { char pad[0x10]; ListHdr_8288BC38 *hdr; } List_8288BC38;
struct Owner_8288BC38;
typedef struct OwnerVt_8288BC38 { void *f0; void *f4; List_8288BC38 *(*getList)(struct Owner_8288BC38 *); } OwnerVt_8288BC38;
typedef struct Owner_8288BC38 { OwnerVt_8288BC38 *vt; } Owner_8288BC38;
typedef struct Vec_8288BC38 { void **first; void **last; void **end; } Vec_8288BC38;

extern void *fn_82897620(List_8288BC38 *l, unsigned int i);
extern void fn_8289B608(void *item, void *value);
extern __declspec(noreturn) void fn_82F622E0(const char *msg);

void fn_8288BC38(Owner_8288BC38 *o, Vec_8288BC38 *v)
{
    unsigned int i;
    for (i = 0; i < o->vt->getList(o)->hdr->count; i++) {
        void *e;
        if ((unsigned int)(v->last - v->first) <= i) {
            fn_82F622E0("invalid vector<T> subscript");
        }
        e = v->first[i];
        if (e != 0) {
            fn_8289B608(fn_82897620(o->vt->getList(o), i), e);
        }
    }
}
