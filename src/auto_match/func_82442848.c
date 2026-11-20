typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Position_82442848 {
    float x;
    float y;
    float z;
} Position_82442848;

typedef struct Listener_82442848 Listener_82442848;

typedef struct ListenerVtbl_82442848 {
    void (*slot0)(void);
    void (*SetPosition)(Listener_82442848 *self, int mode, __vector4 value, Position_82442848 position);
} ListenerVtbl_82442848;

struct Listener_82442848 {
    ListenerVtbl_82442848 *vt;
};

typedef struct Target_82442848 {
    char pad00[0x60];
    Position_82442848 position; /* 0x60 */
    char pad6C[0xdc - 0x6c];
    Listener_82442848 listener; /* 0xdc */
} Target_82442848;

typedef struct Self_82442848 {
    char pad00[0x14];
    Target_82442848 *target; /* 0x14 */
} Self_82442848;

extern void fn_82441D38(Self_82442848 *self, int mode, __vector4 value, Position_82442848 position);

void fn_82442848(Self_82442848 *self, int mode, __vector4 value, Position_82442848 position)
{
    Listener_82442848 *listener;
    Position_82442848 *stored;

    fn_82441D38(self, mode, value, position);
    stored = &self->target->position;
    stored->x = position.x;
    stored->y = position.y;
    stored->z = position.z;
    listener = &self->target->listener;
    listener->vt->SetPosition(listener, mode, value, position);
}
