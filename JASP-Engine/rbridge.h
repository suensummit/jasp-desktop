#ifndef RBRIDGE_H
#define RBRIDGE_H

#include <RInside.h>
#include <Rcpp.h>

#ifdef __WIN32__

#undef Realloc
#undef Free

#endif

#include <string>
#include <map>
#include <boost/function.hpp>

#include "../JASP-Common/dataset.h"

	typedef boost::function<int(const std::string &)> RCallback;

	void rbridge_init();
	void rbridge_setFileNameSource(boost::function<std::string(const std::string &)> source);
	void rbridge_setStateFileSource(boost::function<std::string()> source);
	void rbridge_setDataSet(DataSet *dataSet);
	std::string rbridge_run(const std::string &name, const std::string &options, const std::string &perform = "run", int ppi = 96, RCallback callback = NULL);


#endif // RBRIDGE_H
