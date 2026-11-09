/* lbl_82175388 (2^-32, at 0x82175388) is defined here, with its value, because the original
   loads it once although the stores to rng[1] come between its uses, as for a variable the
   compiler knows they cannot change. Declared extern it is reloaded after each store (79%),
   or read into a local, matches only up to 95%; as the literal, the multiplication by 2^-32
   and 2.0f is folded (84%). */
static float lbl_82175388 = 2.3283064365386963e-10f;

void fn_82D0AEE8(int *rng, float *out)
{
  unsigned u;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[0] = (float)u * lbl_82175388 * 2.0f - 1.0f;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[1] = (float)u * lbl_82175388 * 2.0f - 1.0f;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[2] = (float)u * lbl_82175388 * 2.0f - 1.0f;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[3] = (float)u * lbl_82175388 * 2.0f - 1.0f;
}
