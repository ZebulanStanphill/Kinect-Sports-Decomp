/* Takes the view volume of a projection matrix: depth range and the four side planes. */

typedef struct Camera_82861B08 {
    char pad0[0x18];
    unsigned char unused : 6;
    unsigned char projection : 2; /* 0x18 */
    char pad19[0xe3];
    float top;    /* 0xfc */
    float bottom; /* 0x100 */
    float left;   /* 0x104 */
    float right;  /* 0x108 */
    float far;    /* 0x10c */
    float near;   /* 0x110 */
} Camera_82861B08;

void fn_82861B08(Camera_82861B08 *self, const float *matrix)
{
    float invZ;
    float invX;
    float invY;
    float sizeX;
    float sizeY;
    float offsetX;
    float offsetY;

    invZ = 1.0f / matrix[10];
    self->projection = 2;
    self->near = matrix[14] * invZ;
    self->far = self->near + invZ;
    invY = 1.0f / matrix[5];
    invX = 1.0f / matrix[0];
    offsetY = matrix[13] * invY * -2.0f;
    sizeY = invY * 2.0f;
    offsetX = matrix[12] * invX * -2.0f;
    sizeX = invX * 2.0f;
    self->top = (sizeY + offsetY) * 0.5f;
    self->bottom = (offsetY - sizeY) * 0.5f;
    self->left = (offsetX - sizeX) * 0.5f;
    self->right = (sizeX + offsetX) * 0.5f;
}
