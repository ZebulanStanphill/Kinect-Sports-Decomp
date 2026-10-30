typedef struct { char b[16]; } Buf_82581558;
extern void fn_82520158(const char *, Buf_82581558 *, int);
extern void *fn_8251F720(Buf_82581558 *, int);
extern int fn_82631488(void);
extern void fn_8251FA58(void *);

unsigned fn_82581558(unsigned *o, int k)
{
  unsigned v;
  const char *name;
  Buf_82581558 buf;
  v = o[k + 0x21];
  if (v != 0) return v;
  switch (k) {
  case 0: name = "gpuParticleGenerationPixelShader"; break;
  case 1: name = "gpuParticlePixelShaderPosVelAccel"; break;
  case 2: name = "gpuParticlePixelShaderTheta"; break;
  case 3: name = "gpuParticlePixelShaderThetaColoured"; break;
  case 4: name = "gpuParticlePixelShaderPosVelAccelSoftEdged"; break;
  case 5: name = "gpuParticlePixelShaderThetaSoftEdged"; break;
  case 6: name = "gpuParticlePixelShaderThetaColouredSoftEdged"; break;
  case 7: name = "gpuParticlePixelShaderFourFrameTheta"; break;
  case 8: name = "gpuParticlePixelShaderFourFrameThetaColoured"; break;
  case 9: name = "gpuParticlePixelShaderFourFrameThetaSoftEdged"; break;
  case 10: name = "gpuParticlePixelShaderFourFrameThetaColouredSoftEdged"; break;
  case 0xb: name = "gpuParticlePixelShaderFourFrameNormalMappedSoftEdgedTheta"; break;
  case 0xc: name = "gpuParticlePixelShaderNormalMapped"; break;
  case 0xd: name = "gpuParticlePixelShaderNormalMappedSoftEdged"; break;
  case 0xe: name = "gpuParticlePixelShaderNormalMappedSoftEdgedTheta"; break;
  case 0xf: name = "gpuParticlePixelShaderNormalMappedSoftEdgedShadowed"; break;
  case 0x10: name = "gpuParticlePixelShaderPerturbation"; break;
  case 0x11: name = "gpuParticlePixelShaderPerturbationHighlight"; break;
  case 0x12: name = "gpuParticlePixelShaderThetaPerturbation"; break;
  case 0x13: name = "gpuParticlePixelShaderThetaColouredPerturbation"; break;
  case 0x14: name = "gpuParticlePixelShaderThetaSoftEdgedPerturbation"; break;
  case 0x15: name = "gpuParticlePixelShaderThetaColouredSoftEdgedPerturbation"; break;
  default: return 0;
  }
  fn_82520158(name, &buf, 0);
  {
    void *h = fn_8251F720(&buf, 0);
    o[k + 0x21] = fn_82631488();
    fn_8251FA58(h);
  }
  return o[k + 0x21];
}
