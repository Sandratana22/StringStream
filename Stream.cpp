
#include <string>
#include <iomanip>
#include <sstream>


namespace stringStream {
	std::string function(double number) {
		std:: stringstream stream;
		stream << std::fixed << std::setprecision(1) << number;
		return stream.str();
	}
}