#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector is_naC(NumericVector x) {
  int n = x.size();
  LogicalVector out(n);

  for (int i = 0; i < n; ++i) {
    out[i] = NumericVector::is_na(x[i]);
  }
  return out;
}


#include <Rcpp.h>
// is_naC
LogicalVector is_naC(NumericVector x);
RcppExport SEXP sourceCpp_1_is_naC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(is_naC(x));
    return rcpp_result_gen;
END_RCPP
}
