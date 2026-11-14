typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;

typedef struct Camera_82368D40 {
  char pad0[0x50];
  __vector4 position;      /* 0x50 */
  char pad60[0xb64 - 0x60];
  float fovNormal;         /* 0xb64 */
  char padb68[0xba4 - 0xb68];
  float fovOverride;       /* 0xba4 */
  char padba8[0xbb1 - 0xba8];
  unsigned char useOverride; /* 0xbb1 */
  char padbb2[0xbd0 - 0xbb2];
  __vector4 direction;     /* 0xbd0 */
} Camera_82368D40;
typedef struct Self_82368D40 {
  char pad[0xe10];
  Camera_82368D40 *camera;
} Self_82368D40;

void fn_82368D40(Self_82368D40 *self, __vector4 *position, __vector4 *direction, float *fov)
{
  if (position != 0) {
    *position = self->camera->position;
  }
  if (direction != 0) {
    *direction = self->camera->direction;
  }
  if (fov != 0) {
    Camera_82368D40 *cam = self->camera;
    if (cam->useOverride) {
      *fov = cam->fovOverride;
    } else {
      *fov = cam->fovNormal;
    }
  }
}
