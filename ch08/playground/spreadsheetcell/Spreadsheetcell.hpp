
#include <string>
#include <string_view>

class Spreadsheetcell
{
 public:
	Spreadsheetcell() = default;
	explicit Spreadsheetcell(double initial_value);
	explicit Spreadsheetcell(std::string_view initial_value);
	explicit Spreadsheetcell(const Spreadsheetcell& cpy);
	Spreadsheetcell& operator=(this Spreadsheetcell&	self,
														 const Spreadsheetcell& rhs);

	/**
	 * Sets the value
	 * @param value given value in number format
	 */
	void	 setValue(this Spreadsheetcell& self, double value);
	double getValue() const;

	void				setString(this Spreadsheetcell& self, std::string_view value);
	std::string getString() const;

 private:
	std::string doubleToString(double value) const;
	double			stringToDouble(std::string_view value) const;
	double			m_value { 0 };
};
