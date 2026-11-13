# sROC 0.1.2.9001

Renova release, based on CRAN sROC 0.1-2 (published 2012-04-12).

- `DESCRIPTION`: removed the stale optional `Date: 2012-04-12` field; added `Authors@R` and changed `Author` to `Xiao-Feng Wang [aut, cre]`; reworded `Description` to start 'A collection of functions to perform ...'.
- `NAMESPACE`: added `importFrom` for `graphics` (`abline`, `lines`, `plot.default`, `polygon`) and `stats` (`IQR`, `approx`, `bw.SJ`, `bw.bcv`, `bw.nrd`, `bw.nrd0`, `bw.ucv`, `qnorm`, `sd`).
- `src/init.c` (new): registers the C routines `NKern`, `EKern` and `phi2` with `R_registerRoutines` and turns off dynamic symbol lookup; the algorithms are unchanged.
- `R/sROC.R`: a non-ASCII minus in a comment was replaced by `-`; `man/kROC.Rd`: the usage line was wrapped. No executable R code was changed.
- `DESCRIPTION`: `Version` set to `0.1.2.9001`; "Compatibility updates by Renova." appended to `Description`.
- The stale `MD5` file was removed. `README.md`, `NEWS.md` and `.Rbuildignore` were added.
