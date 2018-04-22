PWD=`pwd`
echo "PWD:$PWD"
ME=`pwd | sed 's!.*/\(.*\)/are!\1!'`
echo "ME:$ME"
