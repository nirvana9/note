<?php

$ex = time() +60;

$FormApikey="iifUoSrM/M4zhFJ9AfL1FkXEU9U=";
$arr = array(
	'bucket' => 'sylvanas',
	'expiration' => $ex,
	'save-key' => '/img.jpg',
	'notify-url' => 'https://apitest.wecomics.cn/jsonrpc/test.json',
);
$jsonStr = json_encode($arr);
echo $jsonStr;
echo "\n";
echo base64_encode($jsonStr);
echo "\n";

$b = base64_encode($jsonStr) . "&" . $FormApikey;

echo md5($b);
echo "\n";


