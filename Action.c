//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("6", "Navigate to 'https://www.google.com/'", "snapshot=Action_6.inf");
	truclient_step("8", "Click on Sign in link", "snapshot=Action_8.inf");
	truclient_step("10", "Type suresh in Email or phone emailbox", "snapshot=Action_10.inf");
	truclient_step("12", "Click on element (2)", "snapshot=Action_12.inf");

	return 0;
}
