// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include <unordered_set>
using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector duplicatedC(IntegerVector x) {
  std::unordered_set<int> seen;
  int n = x.size();
  LogicalVector out(n);

  for (int i = 0; i < n; ++i) {
    out[i] = !seen.insert(x[i]).second;
  }

  return out;
}


#include <Rcpp.h>
// duplicatedC
LogicalVector duplicatedC(IntegerVector x);
RcppExport SEXP sourceCpp_1_duplicatedC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(duplicatedC(x));
    return rcpp_result_gen;
END_RCPP
}
