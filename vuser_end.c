vuser_end()
{
	
	lr_output_message("Price first ticket = %d",atoi(lr_eval_string("{Price}")));

    
    lr_output_message("Number of ticket 1 class= %d",atoi(lr_eval_string("{First_class_ticket_Count}")));
    
	web_url("SignOff Button", 
		"URL={host}/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={host}/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
