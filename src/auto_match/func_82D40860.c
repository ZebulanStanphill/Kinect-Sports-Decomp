/* Returns the float at offset 0x14 of an object; fn_82D68AD0 calls it on a Havok capsule shape and adds
 * the result to the shape's radius. It returns float: the caller uses the value with no rounding. */
float fn_82D40860(const char *object)
{
    return *(const float *)(object + 0x14);
}
