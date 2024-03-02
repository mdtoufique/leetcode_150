/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    var j=0,k=0;
    var nums11=nums1.slice(0, m); 
    for(var i=0;i<m+n;i++)
    {
        if(j>=m)
        {
            nums1[i]=nums2[k];
            k++;
        
        }
        else if(k>=n)
        {
            nums1[i]=nums11[j];
            j++;
        
        }
        else if(nums11[j]>=nums2[k])
        {
            nums1[i]=nums2[k];
            k++;
        }
        else
        {
            nums1[i]=nums11[j];
            j++;
        }
    }

};
