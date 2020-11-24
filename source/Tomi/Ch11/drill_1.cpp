#include "std_lib_facilities.h"

int longest_ln(vector<string>& lastnames)
{
	int longest_last_name = 0;
	
	for(int i = 0; i < lastnames.size(); i++)
	{
			if(lastnames[i].length() > longest_last_name)
				longest_last_name = lastnames[i].length();
		
	}
	
	return longest_last_name;

}

int longest_fn(vector<string>& firstnames)
{
	int longest_first_name = 0;
	
	for(int i = 0; i < firstnames.size(); i++)
	{
			if(firstnames[i].length() > longest_first_name)
				longest_first_name = firstnames[i].length();
		
	}
	
	return longest_first_name;

}

int longest_mail(vector<string>& allmails)
{
	int longest_email = 0;
	
	for(int i = 0; i < allmails.size(); i++)
	{
			if(allmails[i].length() > longest_email)
				longest_email = allmails[i].length();
		
	}
	
	return longest_email;

}

int longest_tel(vector<string>& tels)
{
	int longest_tel_num = 0;
	
	for(int i = 0; i < tels.size(); i++)
	{
			if(tels[i].length() > longest_tel_num)
				longest_tel_num = tels[i].length();
		
	}
	
	return longest_tel_num;

}


void ctable()
{
	string lname = "Last Name: ";
	string fname = "First Name: ";
	string email = "Email: ";
	string tel = "Tel: ";
	
	int lln, lfn, le, lt;
	
	vector<string> lasts = {"Csonka", "Nagy", "Erdei", "Borz", "Vitkos", "Guti"};
	vector<string> firsts = {"Dávid", "László", "Ákos", "Kacsa", "Bence", "Szilárd"};
	vector<string> tels = {"06209955869", "06303339988", "06206785666", "+36306668736", "06205432143", "06304358867"};
	vector<string> emails = {"davidka9505@gmail.com", "lacika666@gmail.com", "akoska666@gmail.com", "adam666@gmail.com", "vitkos666@gmail.com", "szili666@gmail.com"};
	
	lln = longest_ln(lasts);
	le = longest_mail(emails);
	lfn = longest_fn(firsts);
	lt = longest_tel(tels);
	
	for(int i = 0; i < lasts.size(); i++)
	{
		cout << lname << setw(lln) << lasts[i] << setw(2) << '|' << setw(fname.length() + 1) << fname << setw(lfn) << firsts[i] << '\n' << tel << setw(lt) << tels[i] << setw(2) <<'|' << setw(email.length() + 1) << email << setw(le) << emails[i] << "\n\n\n"; 
	}
	
}

int main()
try{
	
	ctable();
	
	return 0;

}catch(exception& e)
{
	cout << "Gumimaci";
	return 1;
}