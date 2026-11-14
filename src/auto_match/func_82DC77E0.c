typedef struct Info_82DC77E0 { short pad; unsigned short id; } Info_82DC77E0;
typedef struct Obj_82DC77E0 { char pad[0x28]; Info_82DC77E0 *info; } Obj_82DC77E0;
extern void fn_82D9AB30(Info_82DC77E0 *info, unsigned short id, void *arg);

void fn_82DC77E0(Obj_82DC77E0 *self, void *arg)
{
    fn_82D9AB30(self->info, self->info->id, arg);
}
