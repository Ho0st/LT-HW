Action1()
{
	
   	web_reg_save_param_ex(
        "ParamName=Price", 
        "LB/IC=Total Charge: $",                 
        "RB/IC= <BR/>",                            
        "Ordinal=1",                             
        LAST); 

    
    web_reg_find(
    	"Text=A First class ticket for",
        "SaveCount=First_class_ticket_Count",
         LAST);


    
	
	
	web_url("Itinerary Button", 
		"URL={host}/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={host}/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
    
    
	
	
	
	return 0;
}
