# sROC

Nonparametric smooth ROC curve estimation for continuous data using kernel estimators.

Compatibility updates by Renova.

Version 0.1.2.9001 makes these changes. `DESCRIPTION`: the stale optional `Date` field was removed, the author is also listed in `Authors@R` (`Author` reads `Xiao-Feng Wang [aut, cre]`; maintainer address unchanged) and the `Description` was reworded to start 'A collection of functions'. `NAMESPACE` gained `importFrom` lines for `graphics` and `stats` functions the package already used. New `src/init.c` registers the three C routines (`NKern`, `EKern`, `phi2`). In `R/sROC.R` one comment character (a Unicode minus) became an ASCII minus, and the `kROC` usage in `man/kROC.Rd` was wrapped over more lines.

## Install

From R-universe:

```r
install.packages("sROC", repos = c(
  Renova = "https://renova-r.r-universe.dev",
  CRAN = "https://cloud.r-project.org"
))
```

Or the exact release tag:

```r
install.packages("remotes")
remotes::install_github("renova-r/sROC@renova-0.1.2.9001")
```

[Release notes](NEWS.md) · [Renova package directory](https://github.com/renova-r/revival-catalog)

sROC was written by Xiao-Feng Wang (maintainer). License: GPL (>= 3) (see [LICENSE](LICENSE), the original GNU GPL v3 text).
