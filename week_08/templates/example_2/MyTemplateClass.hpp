#include <iostream>
#include <string>
#ifndef MYTEMPLATECLASS_H
#define MYTEMPLATECLASS_H
// Implement a template for a class attribute
// Define a class first
template <class F>
class MyTemplateClass {
	private: 
		F _element;
	public:
		MyTemplateClass(F arg) {
			_element = arg;
		}
		F getElement() {
			return _element;		
		}
		void setElement(F elem) {
			_element = elem;
		}
};
#endif