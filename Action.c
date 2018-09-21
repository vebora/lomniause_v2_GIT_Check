//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("01_LaunchURL");
	truclient_step("1", "Navigate to 'http://lomniause002.aaps.deloitte.com/'", "snapshot=Action_1.inf");
	truclient_step("2", "Wait until Banner Logo image exists", "snapshot=Action_2.inf");
	lr_end_transaction("01_LaunchURL",0);
	truclient_step("3", "Call Function LoadCheck.ThinkTime", "snapshot=Action_3.inf");
	truclient_step("4", "Type symphonytest1801@deloitte.com in Sign in Can’t access... emailbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Next button", "snapshot=Action_5.inf");
	truclient_step("6", "Wait until Sign in with your organizational... exists", "snapshot=Action_6.inf");
	truclient_step("7", "Type ************ in Password passwordbox", "snapshot=Action_7.inf");
	lr_start_transaction("02_Homepage");
	truclient_step("8", "Click on Sign in button", "snapshot=Action_8.inf");
	truclient_step("9", "Wait until continue exists", "snapshot=Action_9.inf");
	lr_end_transaction("02_Homepage",0);
	truclient_step("11", "Call Function LoadCheck.LoadCheck", "snapshot=Action_11.inf");
	truclient_step("12", "Call Function LoadCheck.ThinkTime", "snapshot=Action_12.inf");
	lr_start_transaction("03_Continue");
	truclient_step("13", "Click on continue", "snapshot=Action_13.inf");
	truclient_step("18", "Call Function LoadCheck.LoadCheck", "snapshot=Action_18.inf");
	lr_end_transaction("03_Continue",0);
	truclient_step("19", "Call Function LoadCheck.ThinkTime", "snapshot=Action_19.inf");
	lr_start_transaction("04_PlanningClick");
	truclient_step("20", "Click on Workspaces button", "snapshot=Action_20.inf");
	truclient_step("22", "Click on Planning button", "snapshot=Action_22.inf");
	truclient_step("24", "Call Function LoadCheck.LoadCheck", "snapshot=Action_24.inf");
	lr_end_transaction("04_PlanningClick",0);
	truclient_step("25", "Call Function LoadCheck.ThinkTime", "snapshot=Action_25.inf");
	lr_start_transaction("05_AccountBasedClick");
	truclient_step("26", "Click on Workspaces button", "snapshot=Action_26.inf");
	truclient_step("28", "Click on Account based button", "snapshot=Action_28.inf");
	truclient_step("30", "Call Function LoadCheck.LoadCheck", "snapshot=Action_30.inf");
	lr_end_transaction("05_AccountBasedClick",0);
	truclient_step("31", "Call Function LoadCheck.ThinkTime", "snapshot=Action_31.inf");
	lr_start_transaction("06_EvaluateConclude");
	truclient_step("32", "Click on Workspaces button", "snapshot=Action_32.inf");
	truclient_step("34", "Click on Evaluate & Conclude button", "snapshot=Action_34.inf");
	truclient_step("36", "Call Function LoadCheck.LoadCheck", "snapshot=Action_36.inf");
	lr_end_transaction("06_EvaluateConclude",0);
	truclient_step("37", "Call Function LoadCheck.ThinkTime", "snapshot=Action_37.inf");
	lr_start_transaction("07_Logout");
	truclient_step("38", "Click on SS", "snapshot=Action_38.inf");
	truclient_step("40", "Click on LOGOUT button", "snapshot=Action_40.inf");
	lr_end_transaction("07_Logout",0);

	return 0;
}
