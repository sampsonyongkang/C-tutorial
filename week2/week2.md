### 算法

计算的方法

计算机，顾名思义那就是计算的机器，要做计算，那就肯定要有计算的方法，不能乱算，所以算法当然也是计算的关键。

算法的英文 Algorithm 

> In [mathematics](https://en.wikipedia.org/wiki/Mathematics) and [computer science](https://en.wikipedia.org/wiki/Computer_science), an **algorithm** is an unambiguous specification of how to solve a class of problems.

> 在数学和计算机科学领域，一个算法是解决一类问题的一串明确的要求

下面举一个算法的例子

![img](https://upload.wikimedia.org/wikipedia/commons/thumb/1/15/LampFlowchart_ZhS.svg/250px-LampFlowchart_ZhS.svg.png)

解决灯泡不亮的一段简单算法

我们可以简单的为这一串流程图写成伪代码：

```C
int solve_light_error() {
    if (!is_connected_power_supply()) {
        connect_power_supply();
    } else {
        if (is_bulb_broken()) {
            replace_bulb();
        } else {
            repair_light();
        }
    }
}
```

可以注意到这个里面有很多个函数的调用，但是我们并没有去实现它们（或者说没有把它们写到伪代码中），这样的一种思想也就是计算机科学中最常见的抽象的思维（比如接电源这个任务，我们应该会需要拿起插头，找到电源插口，插上电源这样三个步骤，但是这种更加底层的操作就会被我们所忽略，或是前人已经帮我们实现了这些功能，亦或者是我们自己已经在前面实现了这些操作，反正现在拿来就可以直接用，这样的一种抽象思维会贯穿我们整个计算机科学的学习中去）

### 算法的特征

Knuth在 *The Art of Computer Programming* 书中归纳了算法的五个要素

- 输入：必须有大于等于0个输入
- 输出：必须有大于0个输出（至少要有输出，应该反映算法执行的结果）
- 有限性：必须要在有限的步骤内结束
- 明确性：算法的每一步都应该要有清楚而确切的定义，通常要求最终的输出结果是可重复的
- 有效性：又称可行性，算法的每一个步骤都能够被分解为基本且可执行的操作，最重要的，操作都能够在有限的时间内完成（一定要有结束）

### 算法的区别

同样的问题，有不同的解决方法，当然解决问题的效率同样也就不同

举个例子 https://www.keichi.edu.hk/CustomPage/83/website/public_html/%E6%95%B8%E5%AD%B8%E5%AE%B6%E6%95%85%E4%BA%8B/%E9%AB%98%E6%96%AF.html

一般小朋友用的是算法，高斯用的也是算法，为什么他们差距这么大呢（因为他们不是高斯（逃

当然，在我们这些早就把这种故事听了n遍的人这里，一加到一百直接就能回答出5050这个数，那我们是没有用到算法吗？

### 算法设计的一些策略

在算法设计中，我们将普通小朋友这种方法（太阳骑士就是莽）叫做蛮力法，

而高斯使用的这种等差数列的方式叫做分治法（其实应该叫做简并法，参考wikipedia的算法词条），相当于把一个需要做99次加法的过程变成了一次加法和一次乘法，大大提高了运算速度。

而我刚刚说的背下了一加到一百的这种操作呢，可以称之为时空权衡（也就是时间和空间二者不可兼得的一种选择偏向），大家都知道像韦达定理这种可以现推的公式（虽然我已经忘了），有些同学可能每次考试都是现推，但是大部分同学都因为刷了大量的题而记住了这两个式子。

考试现推就是时间换空间，而记下公式就是空间换时间。（在考试中当然是时间重要，所以大多数人的倾向都会是空间换时间，在计算机科学中类似的情况同样存在，譬如CPU的一级缓存，二级缓存，三级缓存这种设定，将经常被使用或者马上会被使用的数据提前载入缓存，大大提高CPU使用率）

还有另外的一些算法设计策略譬如动态规划，贪心算法，减治法，回溯以及分支限界法（这些现在了解意义不大，有一些还必须联系上树或者图等数据结构，如果有想学习ACM的可以去深入了解）



## 搞点算法安排上

讲了这么多，大家肯定都想先上手几个算法了



有一天，布德勒對全班同學說：「今天，你們給我計算 1 + 2 + 3 + 4 + ... + 100 的總和，算不出來，不許回家吃飯！」然後他坐在一旁，獨自看小說去了。 

布德勒剛剛翻開小說，高斯拿著寫著解答的小石板走到他的身邊。高斯說：「老師，我做完了，你看對不對？」做完了？這麼快就做完了？肯定是胡亂做的！布德勒連頭都沒抬，揮揮手說：「錯了，錯了！回去再算！」高斯站著不走，把小石板往前伸了伸說：「我這個答案是對的。」 

布德勒扭頭一看，吃了一驚。小石板上寫著 5050，一點也沒有錯！更使他驚訝的是，高斯沒有用一個數一個數死加的方法，而是頭尾相加，把加法變成乘法來做的：

 1 + 2 + 3 + ....... + 99 + 100 = ( 1 + 100 ) + ( 2 + 99 ) + ...... + ( 50 + 51 ) =  101 x 50 =  5050

　　



這是他從未講過的計算等差數列的方法。

> 十八世紀，德國誕生了一名偉大的天文學家和數學家──高斯。高斯被認為是歷史上最重要的數學家之一，並有「數學王子」的美譽。 
>
> 高斯(Gauss, Carl Friedrich, 1777-1855)出生在德國的布隆斯維克城。舅父是個織綢緞的工人，他見多識廣，常給高斯講各種見聞，鼓勵高斯奮發向上，是高斯的啟蒙老師。
>
> 三歲時，當水泥工頭的父親，星期六總會發薪水給工人，有一次他趴在地板上暗地裡跟著父親計算該給工人的薪水，他站了起來糾正錯誤的數目，把在場的大人嚇得木瞪口呆。
>
> 十歲時，他的數學的老師叫布德勒，他是從城裏到鄉下來教書的。布德勒教學不認真，有時還用鞭子懲罰學生。 
>
> 有一天，布德勒對全班同學說：「今天，你們給我計算 1 + 2 + 3 + 4 + ... + 100 的總和，算不出來，不許回家吃飯！」然後他坐在一旁，獨自看小說去了。 
>
> 布德勒剛剛翻開小說，高斯拿著寫著解答的小石板走到他的身邊。高斯說：「老師，我做完了，你看對不對？」做完了？這麼快就做完了？肯定是胡亂做的！布德勒連頭都沒抬，揮揮手說：「錯了，錯了！回去再算！」高斯站著不走，把小石板往前伸了伸說：「我這個答案是對的。」 
>
> 布德勒扭頭一看，吃了一驚。小石板上寫著 5050，一點也沒有錯！更使他驚訝的是，高斯沒有用一個數一個數死加的方法，而是頭尾相加，把加法變成乘法來做的：
>
>  1 + 2 + 3 + ....... + 99 + 100 = ( 1 + 100 ) + ( 2 + 99 ) + ...... + ( 50 + 51 ) =  101 x 50 =  5050
>
> 　　
>
>
>
> 這是他從未講過的計算等差數列的方法。
>
> 在費迪南公爵的資助下，家境貧困的高斯得以繼續升學，鑽研高等數學，並改進牛頓、歐拉等人的證明。然而考慮到生計問題，高斯一直不確定是否要成為數學家，就在屆滿 19 歲前一個月，高斯用幾何作圖，也就是只有尺和圓規，解決了自歐幾里得以來兩千年無人能解的難題：如何將圓十七等分？這項重大的突破成為一個轉捩點，讓他立定志向將一生奉獻給數學，於是，我們才有了「數學王子」高斯。