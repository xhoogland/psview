<? /* Set up connection to mysql database. */

	$hst = "localhost"; // Host
	$usr = "";          // User
	$pwd = "";          // Password
	$db  = "";          // Database name

	@mysql_connect($hst,$usr,$pwd)
		or exit("Cannot connect to database");
	mysql_select_db($db)
		or exit("Cannot open database!");
?>