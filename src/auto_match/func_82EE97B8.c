typedef struct Link_82EE97B8 { struct Link_82EE97B8 *next, *prev; } Link_82EE97B8;
typedef struct List_82EE97B8 { int unk; Link_82EE97B8 head; } List_82EE97B8;
typedef struct Entry_82EE97B8 { Link_82EE97B8 link; int a,b; unsigned id; int found; } Entry_82EE97B8;
typedef struct Owner_82EE97B8 { char pad[0x50]; char lock[0x1048]; List_82EE97B8 list; } Owner_82EE97B8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
static __forceinline Link_82EE97B8 *first_82EE97B8(List_82EE97B8 *l) { return l->head.next != &l->head ? l->head.next : 0; }
int fn_82EE97B8(Owner_82EE97B8 *self, unsigned id)
{
 Link_82EE97B8 *l;
 RtlEnterCriticalSection(self->lock);
 l = first_82EE97B8(&self->list);
 while (l) {
  Entry_82EE97B8 *e = (Entry_82EE97B8 *)l;
  l = l->next != &self->list.head ? l->next : 0;
  if (e->id == id) { e->found = 1; break; }
 }
 RtlLeaveCriticalSection(self->lock);
 return 0;
}
