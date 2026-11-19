/* Renders one audio frame (fn_82FE6608) and on success ticks the five sound subsystems and two
   managers; a failure is logged with the call's name. */
typedef struct Subsystem_82866FD0 Subsystem_82866FD0;

typedef struct SubsystemVtable_82866FD0 {
    void *slots[2];
    void (*update8)(Subsystem_82866FD0 *self, int value); /* 0x08 */
    void *slotsC[4];
    void (*update1C)(Subsystem_82866FD0 *self, int value); /* 0x1c */
    void *slot20;
    void (*update24)(Subsystem_82866FD0 *self, int value); /* 0x24 */
    void *slot28;
    void (*update2C)(Subsystem_82866FD0 *self, int value); /* 0x2c */
} SubsystemVtable_82866FD0;

struct Subsystem_82866FD0 {
    SubsystemVtable_82866FD0 *vtable;
};

typedef struct Engine_82866FD0 {
    char pad0[0x490];
    Subsystem_82866FD0 *subsystem490; /* 0x490 */
    Subsystem_82866FD0 *subsystem494; /* 0x494 */
    Subsystem_82866FD0 *subsystem498; /* 0x498 */
    Subsystem_82866FD0 *subsystem49C; /* 0x49c */
    char pad4a0[8];
    Subsystem_82866FD0 *subsystem4A8; /* 0x4a8 */
} Engine_82866FD0;

extern int fn_82FE6608(void);
extern void fn_828684F8(void);
extern void fn_82870F68(void);
extern void fn_82230110(void *s, const char *p);
extern void *fn_8223B688(void *dst, void *src);
extern void fn_82230300(void *s, int built, int newsize);
extern void *fn_82868378(void);
extern void fn_8286DA10(void *log, void *msg, int result);

int fn_82866FD0(Engine_82866FD0 *self)
{
    int result;
    char name[32];
    char message[40];

    result = fn_82FE6608();
    if (result != 1) {
        fn_82230110(name, "AK::SoundEngine::RenderAudio( )");
        fn_8286DA10(fn_82868378(), fn_8223B688(message, name), result);
        fn_82230300(name, 1, 0);
        return 0xa00a0000;
    }
    self->subsystem4A8->vtable->update8(self->subsystem4A8, 10);
    self->subsystem49C->vtable->update8(self->subsystem49C, 2);
    self->subsystem494->vtable->update24(self->subsystem494, 10);
    self->subsystem498->vtable->update2C(self->subsystem498, 10);
    self->subsystem490->vtable->update1C(self->subsystem490, 10);
    fn_828684F8();
    fn_82870F68();
    return 0x200a0000;
}
