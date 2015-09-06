
#ifndef __lib_exep_h__
#define __lib_exep_h__

class exep {

public:

	exep(const exep &other);
	exep(const char *msg);
	virtual ~exep();

	void getmsg(char **msg) const;

private:

	char *message;


};

#endif // __lib_exep_h__

