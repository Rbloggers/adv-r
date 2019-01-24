#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector is_naC2(NumericVector x) {
  return is_na(x);
}


#include <Rcpp.h>
// is_naC2
LogicalVector is_naC2(NumericVector x);
RcppExport SEXP sourceCpp_1_is_naC2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(is_naC2(x));
    return rcpp_result_gen;
END_RCPP
}
