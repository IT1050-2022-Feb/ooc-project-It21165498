#include "User.h"
#include "Registered_user.h"

Registered_user *r = new Registered_user();
r->searchPublicEvent("Vesak", rep);
r->displayDetails();
delete r;