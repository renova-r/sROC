#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

extern void NKern(double *, int *, double *, int *, double *, double *);
extern void EKern(double *, int *, double *, int *, double *, double *);
extern void phi2(double *, int *, double *, int *, double *, double *);

static const R_CMethodDef c_methods[] = {
    {"NKern", (DL_FUNC) &NKern, 6},
    {"EKern", (DL_FUNC) &EKern, 6},
    {"phi2", (DL_FUNC) &phi2, 6},
    {NULL, NULL, 0}
};

void R_init_sROC(DllInfo *dll)
{
    R_registerRoutines(dll, c_methods, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
