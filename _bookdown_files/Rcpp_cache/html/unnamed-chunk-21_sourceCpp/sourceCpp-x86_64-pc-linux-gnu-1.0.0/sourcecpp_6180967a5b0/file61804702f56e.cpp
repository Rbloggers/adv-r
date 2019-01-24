// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double sum4(NumericVector xs) {
  double total = 0;
  
  for(const auto &x : xs) {
    total += x;
  }
  return total;
}


#include <Rcpp.h>
// sum4
double sum4(NumericVector xs);
RcppExport SEXP sourceCpp_1_sum4(SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xs(xsSEXP);
    rcpp_result_gen = Rcpp::wrap(sum4(xs));
    return rcpp_result_gen;
END_RCPP
}
