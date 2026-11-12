/* Corresponds to libjpeg 6b jcparam.c fill_dc_scans (open-source IJG libjpeg 6b), with fill_scans inlined. */
typedef struct {
  int comps_in_scan;
  int component_index[4];
  int Ss, Se;
  int Ah, Al;
} jpeg_scan_info;

static __forceinline jpeg_scan_info *
fill_scans (jpeg_scan_info * scanptr, int ncomps,
	    int Ss, int Se, int Ah, int Al)
{
  int ci;

  for (ci = 0; ci < ncomps; ci++) {
    scanptr->comps_in_scan = 1;
    scanptr->component_index[0] = ci;
    scanptr->Ss = Ss;
    scanptr->Se = Se;
    scanptr->Ah = Ah;
    scanptr->Al = Al;
    scanptr++;
  }
  return scanptr;
}

jpeg_scan_info *
fill_dc_scans (jpeg_scan_info * scanptr, int ncomps, int Ah, int Al)
{
  int ci;

  if (ncomps <= 4) {
    scanptr->comps_in_scan = ncomps;
    for (ci = 0; ci < ncomps; ci++)
      scanptr->component_index[ci] = ci;
    scanptr->Ss = scanptr->Se = 0;
    scanptr->Ah = Ah;
    scanptr->Al = Al;
    scanptr++;
  } else {
    scanptr = fill_scans(scanptr, ncomps, 0, 0, Ah, Al);
  }
  return scanptr;
}
