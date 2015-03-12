<?php

include "Crocodile/Upload.php";
include "Crocodile/Signature.php";
include "Crocodile/File.php";
include "Crocodile/Util/MultiPartPost.php";

#namespace Crocodile;
use Crocodile\Signature;
use Crocodile\File;
use Crocodile\Upload;

$formApiKey = "iifUoSrM/M4zhFJ9AfL1FkXEU9U=";
$sign = new Signature($formApiKey);
$upload = new Upload($sign);
$upload->setBucketName('sylvanas');//上传的空间
try {
    //其他参数参见文档: http://docs.upyun.com/api/form_api/#Policy内容详解
    $options = array(
       'path' => '/tesit.png',                   // 文件在服务器保存的路径,必须
#       'return_url' => 'https://apitest.wecomics.cn/jsonrpc/test.json', // 回调地址,可选
       'notify_url' => 'https://apitest.wecomics.cn/jsonrpc/test.json', // 通知地址,可选
    );
	$file = new File("/home/louis/multipart-upload-php-sdk/1.png");
    $result = $upload->upload($file, $options);
} catch(\Exception $e) {
    echo $e->getMessage();
}
