#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/add/add7_golden_int16_test_data.h"

const unsigned int g_add7_golden_int16_test_data_size = 4032;alignas(16) const int16_t g_add7_golden_int16_test_data[] = {32767,26121,5507,29353,5799,-5835,-19776,15114,-15240,29668,-11963,-2792,-16474,-7396,9523,-32279,27338,2615,-4165,-2294,21205,-16434,32767,1096,13164,12578,16903,-32768,5142,16974,32767,-4708,-29767,18102,-10491,-857,-18991,-13053,14621,-27154,-22382,-24166,-24701,-16029,-17894,13575,-24133,-8893,24562,-10730,-5570,-30958,11658,25966,3046,-800,32767,-1817,-16643,-5394,-13536,-23002,-7532,-11692,29087,24469,10060,-6310,-15731,10233,12241,2205,-9800,16692,25677,22881,-14386,-32768,18766,-10988,16351,-25015,-10956,15738,-7418,-15720,23032,-30143,-11913,-8820,15576,-15336,-14680,24944,1814,-18667,1781,18099,15346,2362,-22903,283,-15177,-11700,2432,-32273,12483,1804,13036,-9210,19783,-9604,6544,-197,19978,8474,26517,-20689,-22195,19634,-7650,12035,4769,-19005,-14924,21725,27782,21193,-32768,28245,-10514,-18912,-7591,17126,8910,-13783,12604,-1543,22136,8280,-26425,1214,32767,16318,9176,-9191,-19706,-19851,30653,1807,-21882,-9124,-32493,-5420,11236,-8086,-13739,24852,-23978,13590,10601,-6238,13317,-13670,-19579,11607,3301,-16458,25508,-21655,-22923,10715,-6651,6077,-759,-27158,6335,-19955,-2955,-18477,7602,4239,-3484,3710,16363,-8880,20725,23349,1299,-11389,-16271,19337,29932,-18367,-2442,6361,15775,32767,32767,16687,763,-16255,-15358,8382,-21704,788,4839,17001,-9139,16031,-10941,-2068,9917,-32768,22095,9103,-6083,535,15891,-1097,-22425,18530,-20475,24831,-5941,17273,4109,25,655,19682,-11497,-32768,6005,-240,-15920,-21815,12107,48,12327,-21467,5931,-12450,20134,4446,13938,7821,18455,9346,1394,-9376,-17077,-11982,559,-18881,-17598,19712,27595,17409,-23705,-9449,-11237,18595,28279,27541,-13444,13481,11538,-13991,-829,-8899,-29514,-17972,789,-28843,-13707,-16338,8560,4819,19093,6211,-30792,-4955,-32768,12025,32767,32767,5424,-21271,-8427,28973,-20723,32767,-3265,-32768,-29229,-11460,-6777,-22709,-11098,6831,-26112,-4192,16718,3544,-2001,-23604,-17666,19165,-17229,3177,22794,14503,11084,-19064,14484,-19370,23112,-29543,32767,-27128,9426,13338,18216,-8191,22964,-15546,30542,-8279,-19918,-23290,5123,4107,-5907,7192,-2813,15198,22757,-3438,18244,31444,4071,32767,5240,4781,2714,-17876,-6920,-11813,14464,-5562,-22597,16817,-6487,16238,-4253,18767,16743,18598,-14501,23242,-23241,-30717,30867,-14483,3905,6597,-8873,15148,14171,24405,10430,10774,13830,15487,-16055,2087,-16498,-29425,7915,23045,27673,13180,22700,-542,-9385,11657,-14277,-22826,24615,8764,17542,28279,-1712,12293,-17903,10854,13874,-19163,14904,-3222,-23865,19560,27479,-21619,13267,20968,-24806,-5587,-2091,-11114,28183,-32768,-19419,-4959,-15001,-1668,1861,7612,9926,-4732,-26852,-4140,3420,-7072,7494,5714,-9384,-7799,-5460,-14424,6081,-6063,26641,20341,3741,22349,-8013,12395,-1062,-23769,12461,17488,-4498,-16625,4336,14136,15063,-28649,153,9267,-5620,6433,-30943,27503,21417,8657,-32768,-18467,-17285,23342,-21180,-3420,-10906,-7482,9699,17568,-32768,16262,32767,18866,19467,2682,-12795,29046,-4587,2344,-26620,-8807,4594,25619,-12007,8401,32679,-3865,-8068,-18174,-12255,12195,16279,3363,17864,-1056,-311,6730,4923,20218,3478,12909,-13076,16792,1916,8983,25175,-2066,-18904,17763,-6764,-2214,29163,8378,-7677,-22596,4922,513,17326,-4879,-8282,28797,-26897,32767,18811,-20865,-8588,-21052,-32768,18980,-23944,-31347,-20471,-1174,-16574,-1283,650,-17614,-32467,-5344,9718,-1908,32767,14025,7832,-20545,32502,12143,4820,14789,24188,5806,-19341,-15326,-18815,-3155,-4064,-12191,17580,-10382,2142,-19673,24307,10569,-8088,-13429,30662,-26997,6020,15876,16742,6853,26420,27339,-13578,-18643,15192,-6831,12454,15793,-26945,11546,31911,-13394,-11711,-202,-3809,-9055,3696,30866,-10141,-9518,8626,16041,20656,-11800,-26962,-5987,27161,-8268,8943,9659,-22854,-2882,-8268,-30801,-21185,590,-21752,5102,10952,1111,-32768,-10311,-9790,17206,6391,20222,-11123,13723,-18874,-23301,12475,-8799,15057,-3856,12741,-426,9343,9518,-3372,-1050,23013,-16274,-13047,-21620,24989,-23997,20456,-11390,19154,15084,-3495,21756,362,-25835,3045,-7040,-13993,-8216,-1217,-21539,-15008,18559,-7851,-11425,-13159,29457,-32733,10094,-7462,-16592,2442,-8558,27197,1089,-21622,9298,2244,-17545,5443,-14715,-2873,2009,-11933,17527,32767,-23938,-21526,2775,-17620,-32768,12780,196,-16399,17721,4128,20258,17509,-17253,-4365,-32289,-10511,3800,12591,-4035,26470,18161,24881,-23181,-29700,-30835,-9591,22222,-336,2938,7484,12879,-14375,-26563,8322,18692,32767,-3094,12062,-21726,5939,15525,-32768,3976,-3625,20052,-27083,-700,5612,28199,12000,14767,-20312,16627,-2963,32767,27844,1632,-18697,1833,-22512,-23255,15083,-5375,-1269,11506,19857,2119,9712,18707,-10580,23688,32767,-15408,-9132,-19089,22265,17834,18279,-12147,20676,-7611,3812,15877,-9301,20819,2522,-9517,-3477,3074,11620,-13544,32767,-1151,-152,20310,9130,-4656,5889,1222,-10164,32496,-13508,-14235,19519,-17714,11034,-11306,-27197,-15601,-16725,-1204,-3968,-18075,-6350,-7329,-28099,-14903,-11921,1835,32128,-7200,-17032,-10192,31134,-5103,-20188,-10345,-13180,20788,22206,-32768,17386,29174,-10368,-22389,-21331,29572,4200,-19001,28841,13749,-10123,14688,13930,25538,-3246,18627,-16316,19476,-3493,23858,2305,15929,10721,-14137,29945,17296,-15956,22568,14345,24654,-18850,-8734,18843,-6300,30096,9629,29968,-10517,-13627,29172,-13504,30960,-866,-23018,-11136,-17155,-16712,4040,22453,24272,32767,-11117,18185,-2635,-6727,18010,18884,8966,18147,28160,3474,21019,1093,3489,-2110,11665,-22651,-12081,-17270,-13285,-11015,16956,-13403,-24276,28864,32767,-8475,32767,-19058,20788,-17735,6346,21461,25885,-11943,16917,-5408,-26527,-13584,16516,-13761,2130,-9438,1441,-10981,-25986,3758,-3768,17190,12950,12825,-19502,-32768,-12330,-12145,-4427,1103,32767,14362,-17718,4707,-8774,4000,-20495,11217,7908,7975,-32768,12310,9874,9359,4734,20053,-21576,2458,15399,19560,11689,-13244,-25345,-29439,6747,18445,7188,1947,21438,16903,10271,13365,11245,-24419,-3836,-21701,-31745,-32004,-19794,-545,-9047,7837,14724,-5428,-1497,13947,-10935,31032,19096,24375,-9655,-14988,-24345,9525,16679,-11128,20389,32767,6207,29489,18177,-2639,-20150,-14720,-6561,-11496,5890,1710,-15098,-23455,-29416,-16890,-29045,11841,-14126,-16689,-21470,7703,9717,-27779,27051,-19939,29006,30032,10766,-6542,10186,4760,20000,-1561,2189,25583,-14127,6512,-22402,-5105,30733,11137,17917,8703,-8694,11647,14754,-7941,-15055,-2029,-8728,-14766,-183,12826,10573,1897,-20160,24070,2891,-19513,-24865,-16555,-9610,-26290,-17638,22534,-2819,-4337,31037,-15838,-30878,-20750,16235,-13400,-13360,19750,-10226,8133,-14893,3345,27608,-18267,-16382,32767,-32768,12454,-15578,-21425,20360,8886,10393,-16263,-21667,-26272,24383,-20683,-14616,26732,-6412,-32768,-11479,-13158,-16505,-6071,-2903,-26035,5489,-29037,18143,31773,-2537,2941,-20863,14721,-2042,-5461,24446,5855,22712,-12150,-9741,-17049,-3607,-17986,-15695,5592,32767,-15346,15874,8643,-16032,-447,-32768,9404,-11430,-8137,-5385,-14862,9554,884,-14846,24903,22485,7885,19701,6065,14759,-5363,28571,-13339,27384,-5410,16685,12266,-15624,-27638,-21248,30824,32767,-4292,27922,22454,8733,12042,-22984,-32768,14468,-29205,7794,4946,31411,-2813,-16076,-27136,-23944,27985,32767,8479,14599,5671,16249,21728,4879,-17330,-30563,3528,-6181,-7890,-22336,8237,28146,20739,10318,9023,-1311,18198,8104,20276,188,16860,-15911,24012,11187,-27553,3926,20466,-14556,3548,12554,-32768,-18976,-9532,-16239,-29052,-20391,3344,15307,-19118,-22815,12115,9611,7654,-3375,-32768,5051,-9553,-32768,-24514,-10386,11406,-17374,-1894,10945,14366,-8619,18321,-3029,-713,13386,5003,32767,14390,-17835,1258,19127,-27120,-3422,2623,26077,-10961,14812,-3299,-5892,26278,26616,28336,-9815,4988,32767,17338,-11300,821,-5251,-10347,17319,3138,13104,-10369,12945,21257,-13265,14694,-3109,2602,-258,-26142,-6634,-18709,13508,-16097,13934,-16918,-1434,-16851,22802,11001,12537,-31689,-15482,9309,-8284,15876,-27474,-6610,-7811,8430,7094,5980,-23873,25856,-4159,26363,-9498,-4631,4364,2527,-3904,30010,624,-27619,-32469,-9042,20723,29004,16509,-8101,9778,-29007,13088,-23971,-4093,32767,-31658,-13929,-25388,7822,14630,-32768,-12141,27886,13879,-27262,-31844,-32768,7627,25232,32767,20072,-32768,-6,8753,32767,-6540,23265,5942,-3162,4858,-5864,31701,13942,13054,39,26462,-32768,-1842,-9909,26606,1502,3904,-7252,15269,17466,-11340,5001,19806,5520,-19971,842,4337,-32768,8897,-3061,26992,878,18933,-18488,5536,-24356,18140,18420,9770,3053,-10469,29868,-2539,10820,-27411,-17840,32767,1306,-19675,20185,8549,-32768,-32565,-4493,17661,23420,17479,18489,4397,-31160,8532,-19128,9854,27048,25420,13033,-32768,-11601,30379,-3412,-8520,-16062,-3068,-32639,7930,-6359,13289,21631,-5145,-4336,-31670,10496,22402,-9056,32767,-13580,-825,26512,-8069,28510,-8197,-13364,-7992,-4333,11936,295,-20904,-9441,-24983,-6903,7491,2437,2496,-9857,-2288,13167,-15423,-17805,4476,274,-12595,-6245,3957,-8681,-5892,13598,13302,-8953,14420,12414,32514,-7001,-32768,-16864,5294,-6445,16231,7882,19843,-4484,-14899,16360,9837,-17994,-32768,-8356,-4568,15166,-10974,-2846,-19920,12279,22745,-5704,7726,-16387,20341,-10910,19931,17643,-479,11336,-22091,-2815,-6221,23834,-11639,16089,-20595,3580,-21658,-3357,4370,12298,-6793,1270,-14650,-32023,-2840,12161,-18675,-17359,8608,3699,6578,23694,-20859,-8856,24103,-17866,11710,-16196,-6332,10365,-10823,2375,1789,-32768,-12186,10821,26415,27328,4408,30498,22334,-1064,17797,18080,-2612,13167,-19134,-1891,10656,-11429,-2545,23828,10549,24591,-21250,-1800,1989,-4627,-16191,794,-17428,-17899,-943,4320,28154,-25634,-32123,-12740,-25424,-19959,-2115,-29091,-13295,-4818,4626,-11275,7651,-4388,-14277,14672,15944,-6994,10989,25978,696,-7019,32767,2043,-4576,17824,6562,6456,-22755,-1681,998,30888,6960,-15151,8858,261,-4316,11774,-10190,-30122,28317,21171,30297,-18029,15574,10234,-25019,-1903,27685,-10408,30724,7406,-13453,2556,32767,21938,14356,-32768,6132,20678,24543,25878,9905,23445,311,10037,5459,-12034,-29141,660,-25658,-23900,-9694,16617,-9321,3222,14257,29448,7628,-20402,32767,-16387,-28540,-464,10362,-7463,-16640,7772,8224,4826,-7741,23031,-6042,-7029,28493,-26051,2485,-8375,8912,15290,-6676,12502,722,-10080,3755,-32768,1676,-15879,5565,9226,479,14702,2491,31522,13815,14817,-32768,11025,-3122,22172,-19063,30067,-10129,32767,-9536,29008,25268,-1359,-10331,-288,27061,-17078,17024,9257,-32768,-14605,7294,-18997,-16041,17741,926,28639,4363,-20175,-1509,-31407,4458,19685,18685,16716,-16196,7509,13937,11963,23603,-11922,-27215,29919,-13855,-25557,-8503,5315,9659,-31972,-25082,-29859,13284,-11165,7878,-901,9004,5545,-32768,-1613,11504,-5398,-17145,18001,28591,-10087,-12389,28184,24809,15611,15505,-32768,744,21907,-19308,19010,19453,-4812,29535,-10361,-17090,22512,-13177,-5426,-6624,17251,-9663,-12555,-13465,-3508,12653,-5947,21101,376,-16488,-134,-32768,19214,-17911,11867,-32679,-18331,-28916,549,10023,15770,21563,12934,15337,22327,-24208,13945,12929,-16147,19360,1654,-27578,-9216,-26066,18318,14498,-1557,-32768,8614,8434,32767,1785,-32768,10470,-4050,28023,3518,52,15870,29748,-23060,-22565,-23178,739,-29886,7603,32767,19259,-30734,-22190,-32768,-599,4976,-30178,14868,-5189,-11138,-772,-3859,5297,14264,-5233,-25164,21296,5863,21947,4438,27752,23542,32767,-22419,-20600,23067,14554,9431,-10386,-1919,-11869,15842,-9783,-7225,-6915,8951,5307,32767,-1029,-123,-8121,25277,4068,-6341,-8966,11026,-31078,-7494,-19401,18010,-21670,-32768,-5300,17802,17025,17612,347,-8564,-20228,-8050,-28460,14242,-7198,3171,3474,13146,1955,-11202,6859,17895,23721,-16583,12587,-4104,3014,-22359,-1848,-14915,-21154,-3520,-31321,-18854,-9495,22952,24685,16707,21886,10779,1805,-2248,19310,116,26364,15003,-13273,9619,2234,4273,12702,4949,-20372,2304,14891,-16387,-3686,-545,-23058,7149,-5257,8748,-21245,17622,-12001,22840,6531,947,-32768,32767,1102,9154,-7389,-2649,27638,-18454,32767,-15296,2076,32767,27861,-15455,32767,22071,1453,-11616,-2100,-27025,-28895,-4955,1366,19026,15620,-20191,4414,-1038,-15015,-2578,-24668,14745,-4022,23972,10692,-32768,2390,15001,-1973,18164,24942,8874,-9111,19047,-32768,7551,-31314,-17920,-29777,-23882,-10369,-23339,5494,-7727,3214,-8471,29995,-25300,-16977,-22159,24562,-12733,8688,12267,8749,25266,-15280,-30740,-31044,-4703,-32768,15212,-3636,1522,13136,1300,3336,-28617,-5199,-8921,-3655,-7228,29120,-1108,11853,2724,25333,-25203,4202,11005,-3719,-14009,16936,4237,-18609,14263,17118,29140,6847,-7721,-5876,24762,17973,-2970,-2713,-3003,-17194,10419,-21274,-9081,-24752,-11294,-1908,-19085,21087,-8556,6691,237,-3554,14830,-11115,19506,-474,10387,-11356,-18715,32767,26558,2537,2360,11925,-1318,7575,25856,11297,3053,-32699,12046,-16240,9675,15472,-32768,30307,5980,27184,-10888,-15349,20438,-32768,-1302,5269,14298,-25056,2140,-20550,-5207,-25147,24743,-17710,-4429,-17509,-11788,-16307,2971,32767,-3459,-16941,5145,13898,22337,9668,-27651,-18763,-6485,-7377,18641,12448,-28373,2560,1755,18179,-11562,22591,-8464,-32768,-2516,-1259,-27142,-659,-22970,-15604,-6841,-32768,13465,18947,-7012,-28721,-7043,-4832,24039,12301,-6369,-1826,-32622,21275,5824,-16554,-14045,500,19161,14176,-8298,-16984,2997,15890,-9126,14781,-18236,-20534,-5682,-7461,538,-10212,10694,2010,-13732,-18212,-4645,-13665,-12327,-6005,-22056,-679,-5189,13199,5334,16823,-16222,-20493,-17455,-24555,13557,-6600,-11612,-3393,15380,-17387,-8788,18587,8464,-29365,24795,10903,468,10173,-4179,12702,-17362,8282,-29660,13866,-19431,-6729,4759,17372,11917,-17094,1622,9250,-23540,15287,25934,17274,-17211,-5161,2529,-14973,-25829,10966,14807,-2830,16534,32767,21359,4153,4555,-24585,-9235,-12371,-32768,26198,-9662,-18979,27417,-9526,-2101,12683,30337,-3868,-14470,-1898,9468,15401,-8265,-21144,-32512,-10246,-14847,9746,18304,20766,11534,31641,3189,3120,16100,26030,-23570,5550,-4640,-13332,-13045,32767,-10419,2546,-15425,17960,15051,-14038,1908,-26860,130,-15260,-22469,22738,-12626,-9204,-18394,-17242,-29672,-15396,6126,-17404,2943,-21042,6128,9178,22375,245,20954,-1841,26930,-12659,-32768,-16206,25010,-13808,-12013,15083,-12109,623,-9689,9350,29405,22497,-5561,12502,14856,-24318,-11507,-31231,20338,16952,-15377,-26926,23666,-10946,-29233,-13958,-13940,19786,22298,3719,5728,-7312,946,54,9192,1925,-14849,10238,12887,10763,20734,8813,32767,-7141,-32768,12171,-2490,-603,-10698,-9159,-3617,22526,21818,-29158,23153,14679,-22067,-11279,18868,-28541,-28464,17714,-15796,21480,-2977,-11541,-14450,2012,22470,-16904,-8911,-32768,-16976,14682,7939,-25698,26461,2473,11214,875,-12304,12572,16543,-5456,18658,5380,5320,-19803,-16900,17589,27289,17211,16301,-6908,10784,10113,11282,-28972,7433,-28352,-900,1567,-19909,-9150,-12621,2076,-30957,11180,305,-13072,19960,-17220,-9672,8931,-11484,17670,2089,-23822,1381,-22395,-4167,-10251,-29070,-16335,-28473,8401,6588,-20223,-17784,-7212,6482,-10821,-26997,-685,8833,240,-5754,-10721,21954,-30728,8379,9226,1835,13108,15617,12488,3774,-21312,2701,1517,-19318,1301,6951,25185,-17073,20757,12506,12636,-15140,-16777,-18496,-17949,31646,-14271,24381,17257,-2847,2591,-6606,5463,21033,20884,-29726,-30228,-11641,14337,24055,-12150,-7090,3392,-8069,-9338,-27783,-11916,18934,22536,28468,-17718,6864,7293,5962,8012,-10563,-19520,-9402,11723,-21717,-11328,-14959,22747,-19551,-6555,-10789,-7432,1556,10686,-11166,-10695,27971,4766,7391,-10579,19713,16349,-32768,-13443,12957,-6208,-9163,1286,7141,6154,5419,5919,-8584,-10392,-21430,7565,-22570,1882,-26603,-24113,4108,-21111,-9783,3215,32767,-19868,22469,2711,7545,-1930,-3891,-11366,7622,-11512,2322,13484,27076,-32768,9288,10171,-9643,-619,-11633,-17846,22487,-5437,22843,-7898,-6906,-21001,-2331,-23265,-32768,-1864,11134,-13890,19744,4981,-4630,10982,-12952,17496,30415,-20770,-3019,3808,9838,-32768,-15587,8954,25189,9436,25236,32767,-14507,-31770,21960,10786,27890,-30025,16860,24170,-26908,25035,-13502,-6016,3926,-11264,-9632,12752,-9462,-10488,-6763,31826,21096,19927,-26390,-23398,6147,32767,32767,18813,12495,-16612,14390,13690,-18308,-5193,-2788,-13144,5939,13833,18889,32767,7766,20401,-9785,-9944,30170,15952,-32768,-929,-12250,22113,-3213,-10666,714,-19054,26286,-31896,8112,-4211,-4992,-19739,-6645,-21947,-14742,32767,-4624,6182,9974,21237,21740,2902,-12097,23891,22419,25148,-28637,-17415,-8770,-4849,10493,10522,-17021,-8229,7592,-32768,-15562,-13956,12977,3768,4340,-11350,17264,-1183,10189,11308,12981,-2592,-527,-21050,-10294,-7837,-15816,-12282,32767,-30932,-2398,-7094,-11221,-27152,-15234,-6041,21210,17271,7345,-3686,7841,5291,17497,-11904,5933,-10248,-3596,140,-9693,17026,32767,-17272,-28466,-32768,-12475,-19205,-29035,-7450,-9119,-3950,-4449,-3765,19875,-16989,-27425,10388,2921,-28309,31061,18137,-3025,14136,-1008,8123,-17943,16388,6483,2302,-22515,32767,32767,18833,-3462,13043,9828,-21377,31835,-7956,-5763,25805,-1579,4072,-5841,-7192,32561,20066,-17549,-20745,14907,7166,-3601,18131,-29476,16561,14902,-25099,-1999,-28217,-993,13750,24760,4183,-26802,6845,18194,-27895,-6678,-30833,-757,-27423,33,-31792,-6398,14253,6134,16697,30601,-18258,-8677,-2383,2559,-27544,24701,-13164,19706,-3650,27946,13568,-5562,-27038,-15208,16286,27079,-5887,11291,-21473,-12758,-23318,21270,-7865,16808,-25661,12556,30025,945,-31216,14728,27617,3951,16977,-11145,-2216,-29278,-29521,-16004,-13450,15026,17500,-13512,-29947,12352,3612,13501,-934,-32768,1664,-10135,15053,5606,24816,22807,2841,3706,-11219,14372,4812,3773,-14533,17664,32767,12208,-7954,14612,-13196,14880,-18028,26804,13146,9605,5584,17766,16411,-27195,-27663,5360,774,9377,4590,25384,-32768,-32768,21217,-13118,3167,8845,-15397,-21835,7798,26976,400,124,-8444,6750,-19421,-15733,20939,-19875,-756,1190,7131,635,-32022,-24729,-12581,26441,2202,22818,4262,3442,10094,-31800,-1270,-18569,2829,-17172,32767,8867,-28654,13321,16770,-18448,-19804,28293,-12550,8701,-26060,-16950,30473,-9336,5615,32767,24079,-1119,22669,-8822,20436,-544,12101,17973,-6351,7120,21177,14070,-10688,-19988,-7153,-367,-4013,17574,-15377,-7642,-18257,30285,-27146,13805,30411,-9044,32767,-7144,5550,-25746,-17877,11096,19261,-17042,-4273,153,-3948,-12863,20091,-27560,-22747,-12974,-17872,4549,-6224,-32768,10077,-362,-4475,17765,-2884,-5875,8666,-10316,-1794,-32768,5070,-32768,-28217,-12984,-14383,-2427,-32768,-22047,5832,-12206,4336,-4066,8726,-8893,-11230,-32768,12557,21355,28771,3193,-32768,-686,-59,-24049,-3452,-32768,10263,4236,22485,-28604,-1850,-24692,-25661,-5861,-30213,27125,11180,-2443,10133,17324,12049,18808,14830,-18225,15155,26493,1826,4057,14702,-1378,-7385,-16701,4416,-16475,32767,-11078,-17590,16807,18983,32767,-23417,23642,6749,995,9515,-9068,15258,-750,-619,-14065,-18215,-1567,28947,5812,24904,338,10133,-27463,-9970,-1750,-18291,-27994,-13348,-8252,16847,163,16163,-27462,11995,-4757,13103,-17413,-8088,-30329,-13556,32767,5948,-16494,-24036,10383,-3356,12168,-27728,6924,17525,15459,19961,-19170,-20993,6486,25660,-12081,-488,-1049,-15730,-26339,5399,-8120,7608,-17235,-11665,-153,32767,1345,-32768,13754,27061,-5413,29891,-19100,12918,-18969,-1355,-1091,-7297,-32451,-7570,-4788,-1446,29196,-12261,-22496,-3498,-20807,17859,-5691,-32039,4901,-3320,21489,-21854,18810,-19507,-5454,18893,6818,13240,-5796,10798,-15903,-30554,32767,-2054,-4587,6097,6453,4426,-2961,7223,4958,-16072,-15625,7404,-9228,1679,17998,15966,-8322,1500,15824,-8984,-12929,-32768,-17166,-29414,29475,-14519,17099,-1590,-4532,-3235,19278,-18258,20084,15260,23191,10361,1503,509,-29144,-1124,-2789,-15676,10783,-15266,5192,-18653,-3234,-7784,-12177,-13948,-7528,12117,-7809,14944,10928,-22843,5604,-1332,-16553,10892,13030,-22279,-16765,16513,5061,4516,9260,-21826,-12330,-1197,-11617,8763,7826,11026,-32768,-15295,17267,-18191,-4696,10548,-7992,9225,-25750,6566,8329,-12208,232,10207,-3708,-20918,-8973,-21072,-5042,-14233,20041,6933,-24831,10133,-1795,6085,-11430,12597,11907,-21445,-24065,-8802,-17589,-19896,-13577,26383,11589,-18849,-10280,20905,14449,-31467,-32768,15685,23882,15404,-23243,30046,-22632,-10959,-18263,-3947,-20607,-4600,-21482,-2270,9224,-10382,-11903,30784,-17331,-14091,-23265,740,28995,25416,-28604,-3308,13404,-23965,14373,21076,3676,2995,1728,-16975,20831,16552,-5987,-628,-29173,9284,-10846,28677,-7047,2118,14128,-29496,30430,-29760,32767,-414,26210,4280,-11092,6165,4386,17003,-13989,-14502,-14581,1378,15646,-3983,15106,-2579,-27518,-4336,-14554,32767,22372,-23681,9890,32767,6954,-5005,-14416,-7285,11061,-23464,9752,-5671,-21356,-4805,32767,-11219,-30877,-13066,-32768,-8173,-28923,15852,25497,5848,-26218,367,-32768,8609,5432,15571,-5485,-29774,7932,-24537,22234,15332,-13732,17186,249,-10577,3931,-21416,-4706,-938,-10431,3793,21201,-16858,20907,-2396,-4422,4453,212,22667,2396,24929,-31388,21800,21479,22301,24648,-26731,-32768,10767,16369,31679,9217,-28202,23528,-6829,-26107,-15267,24189,241,-11297,25529,2828,-21964,25158,10305,19280,-31080,29361,4707,-1524,7443,-2753,-11162,-3400,-383,9454,-13379,7819,-25474,18356,8889,8811,-12549,9655,13186,6669,22932,-32768,-20118,-21736,7341,-7963,-5200,-756,-4485,-6462,-6526,512,-12369,29159,-20473,-1190,7946,1258,10075,8643,9711,-1038,5945,-5641,-18941,15134,29167,18816,13682,23121,-3619,11902,-23344,-5914,-310,-11506,21710,20044,14133,-9700,3249,-8129,16556,-15751,-17023,-29401,2891,-10871,-30204,-32768,9565,-31514,-25067,8742,20484,18103,19808,10232,-3693,-18574,-5888,-9381,-1361,-25947,2143,4086,12993,-11404,11881,17386,19484,-8876,5319,13111,-27962,-3588,-2072,23191,17944,-12213,-17903,-28253,-14967,32767,4526,167,-22388,27538,-3216,-13109,-14951,23496,-15808,-3175,-14847,17792,26150,-16155,27646,17448,24766,1084,-30052,-25499,-2459,5797,-2095,-24841,11958,-29575,32767,25957,-12596,6977,-26276,23503,-13139,-22244,18044,7765,16941,-2530,22939,29859,-32768,17715,-1099,-21673,5413,953,-12557,-16803,7941,3131,9410,5791,32305,-26251,27018,27660,-14448,14972,13238,-20272,-16622,-25091,9211,-13096,-12779,4595,17305,-5978,-2423,-9134,20353,-3624,28899,-8977,-6770,-16797,-291,-12591,-16965,-20532,-6033,7836,32767,-7145,-31821,-19478,20478,5768,22692,24559,-739,-14454,-12285,-3215,23182,-13030,16293,-15872,18879,20613,32606,-6028,-7058,15994,-3538,-22156,18011,-12192,13518,32767,14175,6290,305,-16948,-14513,89,-12224,-10047,-16709,12375,8701,12863,12804,12275,-5785,17504,2735,24475,-16859,-19817,14326,18594,15949,32767,24804,-23222,27635,32767,1701,24849,-4612,-32204,-21858,-7405,9281,3541,-3118,-19372,-1570,17720,17321,-28394,-19508,-7426,-1151,-10711,-5092,7601,-22131,-32377,21102,16110,28919,3820,11348,9396,6610,17402,1490,7035,21690,-17146,13099,16762,-12068,21790,7548,-13031,25531,15733,-13918,-29434,-17149,19266,-5721,23452,6683,19654,-9919,-27958,-15100,19640,-8432,-10073,-13337,-32768,-20174,-13915,27658,-22110,26575,-9236,8837,15426,5057,-5683,26667,6354,-13815,2820,-32768,-32647,-1502,17542,19473,-3220,13882,-8802,28097,3703,-14923,-27345,-17445,-9897,15261,-4452,-25936,15322,10286,-9263,2678,32767,-10428,-2063,26399,-20390,-20133,6807,28782,-28872,-4916,19755,-28503,32767,-8317,-4842,-12406,-1310,14104,-21962,32767,12611,-5366,10202,11768,19786,15795,-16664,17694,-12787,-6881,10702,9508,13910,24963,20058,-32768,15411,-23456,-8783,-10233,-14727,-12258,6708,8687,-13686,-32768,-6930,26524,16414,7938,6445,5263,-32768,3488,14557,-12523,8995,-10867,-11796,-9221,-7065,29855,-24021,-14508,-17112,-8885,5984,9372,-10806,-7901,32767,-21056,-14102,-8773,-21362,4871,-15212,17449,25182,6217,-9513,294,4552,2662,14024,28536,-18671,18364,-671,-8818,14136,28503,135,-8569,19751,30288,-14584,931,-7541,-17850,-15796,22325,12883,29283,31943,2251,-7720,-416,20090,-14718,-6739,-26286,11112,14724,-31477,-18498,-32768,22247,11257,22718,871,20930,30791,13057,-21646,-5959,7339,12257,-18949,-32768,-11593,-1771,20121,18865,13938,16883,-3893,29567,-13347,11687,-24815,-17029,32767,-22973,-19138,13991,-171,-19324,32767,-2255,-4443,25363,4025,-6193,-11367,-13370,-26205,23562,21780,-14170,9594,7823,-2334,-32768,-2091,14069,3461,-18023,-4355,3212,-15556,-20948,6027,-18150,-24234,18013,11683,121,-11628,-32768,-17026,31868,-15604,26525,12865,-5607,7189,-7681,-25143,-20433,-29856,-1333,32767,16361,-12252,-32768,-3335,23350,13853,-15856,31543,25748,-10626,25401,3651,-210,-20483,-13990,25395,-872,32767,-9501,-23893,-10007,-14068,12348,-5403,-11248,9004,-23419,7061,-1450,28642,-30055,-26759,12535,-16810,-32768,-19125,19032,6157,-22489,1110,634,16727,21344,-14809,-6305,-32768,226,88,-7088,-21055,-6230,-21226,13166,-30776,-4839,8831,5885,-25641,-24813,849,15190,9521,8386,-2083,11509,3227,7621,-32768,-27510,-1285,10094,-8666,-27681,-12848,-11072,-26600,20711,-2701,8927,22124,4534,7227,19963,-24767,-10187,-8048,13446,-24429,-31931,32767,22397,18505,14390,-15084,-2915,21689,-19586,-29369,-1642,-7241,-20879,7612,18531,17723,17467,13997,85,11368,-3371,18690,-31504,12200,-17089,-1031,-14944,13058,-17253,-14076,23026,8881,18439,-5117,3282,8710,19850,28549,-28047,20344,-4824,8920,17011,-10239,-145,-23380,28855,20848,24710,-11653,25334,8619,21574,7898,-3091,12680,19372,27849,7694,23632,1914
};
