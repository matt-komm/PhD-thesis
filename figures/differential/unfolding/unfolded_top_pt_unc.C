void unfolded_top_pt_unc()
{
//=========Macro generated from canvas: cvUnc0.193662143299/
//=========  (Tue May 16 18:49:43 2017) by ROOT version6.02/05
   TCanvas *cvUnc0.193662143299 = new TCanvas("cvUnc0.193662143299", "",0,0,1300,780);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvUnc0.193662143299->SetHighLightColor(2);
   cvUnc0.193662143299->Range(-65.34653,-3.9,528.7129,28.6);
   cvUnc0.193662143299->SetFillColor(0);
   cvUnc0.193662143299->SetBorderMode(0);
   cvUnc0.193662143299->SetBorderSize(2);
   cvUnc0.193662143299->SetTickx(1);
   cvUnc0.193662143299->SetTicky(1);
   cvUnc0.193662143299->SetRightMargin(0.385);
   cvUnc0.193662143299->SetTopMargin(0.08);
   cvUnc0.193662143299->SetBottomMargin(0.12);
   cvUnc0.193662143299->SetFrameFillStyle(0);
   cvUnc0.193662143299->SetFrameLineWidth(0);
   cvUnc0.193662143299->SetFrameBorderMode(0);
   cvUnc0.193662143299->SetFrameBorderSize(0);
   cvUnc0.193662143299->SetFrameFillStyle(0);
   cvUnc0.193662143299->SetFrameLineWidth(0);
   cvUnc0.193662143299->SetFrameBorderMode(0);
   cvUnc0.193662143299->SetFrameBorderSize(0);
   
   TH2F *axisUnc0.05820847547461 = new TH2F("axisUnc0.05820847547461","",50,0,300,50,0,26);
   axisUnc0.05820847547461->SetLineStyle(0);
   axisUnc0.05820847547461->SetMarkerStyle(20);
   axisUnc0.05820847547461->SetMarkerSize(0.16);
   axisUnc0.05820847547461->GetXaxis()->SetTitle("p#lower[0.4]{#scale[0.7]{T}}#kern[-0.5]{ }(t+t#lower[-0.87]{#kern[-0.91]{-}}) (GeV)");
   axisUnc0.05820847547461->GetXaxis()->SetNdivisions(1005);
   axisUnc0.05820847547461->GetXaxis()->SetLabelFont(43);
   axisUnc0.05820847547461->GetXaxis()->SetLabelOffset(0.008);
   axisUnc0.05820847547461->GetXaxis()->SetLabelSize(31);
   axisUnc0.05820847547461->GetXaxis()->SetTitleSize(34);
   axisUnc0.05820847547461->GetXaxis()->SetTickLength(0.04950495);
   axisUnc0.05820847547461->GetXaxis()->SetTitleOffset(1.1);
   axisUnc0.05820847547461->GetXaxis()->SetTitleFont(43);
   axisUnc0.05820847547461->GetYaxis()->SetTitle("Uncertainty (%)");
   axisUnc0.05820847547461->GetYaxis()->SetNdivisions(512);
   axisUnc0.05820847547461->GetYaxis()->SetLabelFont(43);
   axisUnc0.05820847547461->GetYaxis()->SetLabelOffset(0.008);
   axisUnc0.05820847547461->GetYaxis()->SetLabelSize(31);
   axisUnc0.05820847547461->GetYaxis()->SetTitleSize(34);
   axisUnc0.05820847547461->GetYaxis()->SetTickLength(0.01875);
   axisUnc0.05820847547461->GetYaxis()->SetTitleOffset(1.1);
   axisUnc0.05820847547461->GetYaxis()->SetTitleFont(43);
   axisUnc0.05820847547461->GetZaxis()->SetLabelFont(43);
   axisUnc0.05820847547461->GetZaxis()->SetLabelOffset(0.008);
   axisUnc0.05820847547461->GetZaxis()->SetLabelSize(34);
   axisUnc0.05820847547461->GetZaxis()->SetTitleSize(40);
   axisUnc0.05820847547461->GetZaxis()->SetTitleFont(43);
   axisUnc0.05820847547461->Draw("AXIS");
   
   TH1F *statHistHerwig0.4249062966642 = new TH1F("statHistHerwig0.4249062966642","",4,0,300);
   statHistHerwig0.4249062966642->SetBinContent(1,24.2999);
   statHistHerwig0.4249062966642->SetBinContent(2,10.42826);
   statHistHerwig0.4249062966642->SetBinContent(3,10.96116);
   statHistHerwig0.4249062966642->SetBinContent(4,15.96093);
   statHistHerwig0.4249062966642->SetEntries(4);
   statHistHerwig0.4249062966642->SetLineWidth(2);
   statHistHerwig0.4249062966642->SetMarkerStyle(20);
   statHistHerwig0.4249062966642->SetMarkerSize(1.65);
   statHistHerwig0.4249062966642->GetXaxis()->SetNdivisions(1005);
   statHistHerwig0.4249062966642->GetXaxis()->SetLabelFont(43);
   statHistHerwig0.4249062966642->GetXaxis()->SetLabelOffset(0.008);
   statHistHerwig0.4249062966642->GetXaxis()->SetLabelSize(34);
   statHistHerwig0.4249062966642->GetXaxis()->SetTitleSize(40);
   statHistHerwig0.4249062966642->GetXaxis()->SetTickLength(0.025);
   statHistHerwig0.4249062966642->GetXaxis()->SetTitleOffset(0.99);
   statHistHerwig0.4249062966642->GetXaxis()->SetTitleFont(43);
   statHistHerwig0.4249062966642->GetYaxis()->SetNdivisions(512);
   statHistHerwig0.4249062966642->GetYaxis()->SetLabelFont(43);
   statHistHerwig0.4249062966642->GetYaxis()->SetLabelOffset(0.008);
   statHistHerwig0.4249062966642->GetYaxis()->SetLabelSize(34);
   statHistHerwig0.4249062966642->GetYaxis()->SetTitleSize(40);
   statHistHerwig0.4249062966642->GetYaxis()->SetTickLength(0.025);
   statHistHerwig0.4249062966642->GetYaxis()->SetTitleOffset(1.2);
   statHistHerwig0.4249062966642->GetYaxis()->SetTitleFont(43);
   statHistHerwig0.4249062966642->GetZaxis()->SetLabelFont(43);
   statHistHerwig0.4249062966642->GetZaxis()->SetLabelOffset(0.008);
   statHistHerwig0.4249062966642->GetZaxis()->SetLabelSize(34);
   statHistHerwig0.4249062966642->GetZaxis()->SetTitleSize(40);
   statHistHerwig0.4249062966642->GetZaxis()->SetTitleFont(43);
   statHistHerwig0.4249062966642->Draw("SameLP");
   
   TH1F *sysHistBtag0.6439150195643 = new TH1F("sysHistBtag0.6439150195643","",4,0,300);
   sysHistBtag0.6439150195643->SetBinContent(1,4.703808);
   sysHistBtag0.6439150195643->SetBinContent(2,3.914817);
   sysHistBtag0.6439150195643->SetBinContent(3,4.167733);
   sysHistBtag0.6439150195643->SetBinContent(4,4.815145);
   sysHistBtag0.6439150195643->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6619");
   sysHistBtag0.6439150195643->SetLineColor(ci);
   sysHistBtag0.6439150195643->SetLineStyle(2);
   sysHistBtag0.6439150195643->SetLineWidth(3);

   ci = TColor::GetColor("#ff6619");
   sysHistBtag0.6439150195643->SetMarkerColor(ci);
   sysHistBtag0.6439150195643->SetMarkerStyle(20);
   sysHistBtag0.6439150195643->SetMarkerSize(1.65);
   sysHistBtag0.6439150195643->GetXaxis()->SetNdivisions(1005);
   sysHistBtag0.6439150195643->GetXaxis()->SetLabelFont(43);
   sysHistBtag0.6439150195643->GetXaxis()->SetLabelOffset(0.008);
   sysHistBtag0.6439150195643->GetXaxis()->SetLabelSize(34);
   sysHistBtag0.6439150195643->GetXaxis()->SetTitleSize(40);
   sysHistBtag0.6439150195643->GetXaxis()->SetTickLength(0.025);
   sysHistBtag0.6439150195643->GetXaxis()->SetTitleOffset(0.99);
   sysHistBtag0.6439150195643->GetXaxis()->SetTitleFont(43);
   sysHistBtag0.6439150195643->GetYaxis()->SetNdivisions(512);
   sysHistBtag0.6439150195643->GetYaxis()->SetLabelFont(43);
   sysHistBtag0.6439150195643->GetYaxis()->SetLabelOffset(0.008);
   sysHistBtag0.6439150195643->GetYaxis()->SetLabelSize(34);
   sysHistBtag0.6439150195643->GetYaxis()->SetTitleSize(40);
   sysHistBtag0.6439150195643->GetYaxis()->SetTickLength(0.025);
   sysHistBtag0.6439150195643->GetYaxis()->SetTitleOffset(1.2);
   sysHistBtag0.6439150195643->GetYaxis()->SetTitleFont(43);
   sysHistBtag0.6439150195643->GetZaxis()->SetLabelFont(43);
   sysHistBtag0.6439150195643->GetZaxis()->SetLabelOffset(0.008);
   sysHistBtag0.6439150195643->GetZaxis()->SetLabelSize(34);
   sysHistBtag0.6439150195643->GetZaxis()->SetTitleSize(40);
   sysHistBtag0.6439150195643->GetZaxis()->SetTitleFont(43);
   sysHistBtag0.6439150195643->Draw("HISTSameLP");
   
   TH1F *sysHistPU0.7396169433594 = new TH1F("sysHistPU0.7396169433594","",4,0,300);
   sysHistPU0.7396169433594->SetBinContent(1,14.75116);
   sysHistPU0.7396169433594->SetBinContent(2,0.5508052);
   sysHistPU0.7396169433594->SetBinContent(3,3.729053);
   sysHistPU0.7396169433594->SetBinContent(4,2.64425);
   sysHistPU0.7396169433594->SetEntries(4);

   ci = TColor::GetColor("#999999");
   sysHistPU0.7396169433594->SetLineColor(ci);
   sysHistPU0.7396169433594->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   sysHistPU0.7396169433594->SetMarkerColor(ci);
   sysHistPU0.7396169433594->SetMarkerStyle(20);
   sysHistPU0.7396169433594->SetMarkerSize(1.65);
   sysHistPU0.7396169433594->GetXaxis()->SetNdivisions(1005);
   sysHistPU0.7396169433594->GetXaxis()->SetLabelFont(43);
   sysHistPU0.7396169433594->GetXaxis()->SetLabelOffset(0.008);
   sysHistPU0.7396169433594->GetXaxis()->SetLabelSize(34);
   sysHistPU0.7396169433594->GetXaxis()->SetTitleSize(40);
   sysHistPU0.7396169433594->GetXaxis()->SetTickLength(0.025);
   sysHistPU0.7396169433594->GetXaxis()->SetTitleOffset(0.99);
   sysHistPU0.7396169433594->GetXaxis()->SetTitleFont(43);
   sysHistPU0.7396169433594->GetYaxis()->SetNdivisions(512);
   sysHistPU0.7396169433594->GetYaxis()->SetLabelFont(43);
   sysHistPU0.7396169433594->GetYaxis()->SetLabelOffset(0.008);
   sysHistPU0.7396169433594->GetYaxis()->SetLabelSize(34);
   sysHistPU0.7396169433594->GetYaxis()->SetTitleSize(40);
   sysHistPU0.7396169433594->GetYaxis()->SetTickLength(0.025);
   sysHistPU0.7396169433594->GetYaxis()->SetTitleOffset(1.2);
   sysHistPU0.7396169433594->GetYaxis()->SetTitleFont(43);
   sysHistPU0.7396169433594->GetZaxis()->SetLabelFont(43);
   sysHistPU0.7396169433594->GetZaxis()->SetLabelOffset(0.008);
   sysHistPU0.7396169433594->GetZaxis()->SetLabelSize(34);
   sysHistPU0.7396169433594->GetZaxis()->SetTitleSize(40);
   sysHistPU0.7396169433594->GetZaxis()->SetTitleFont(43);
   sysHistPU0.7396169433594->Draw("HISTSameLP");
   
   TH1F *sysHistEn0.7940666361625 = new TH1F("sysHistEn0.7940666361625","",4,0,300);
   sysHistEn0.7940666361625->SetBinContent(1,3.390587);
   sysHistEn0.7940666361625->SetBinContent(2,3.56586);
   sysHistEn0.7940666361625->SetBinContent(3,1.541289);
   sysHistEn0.7940666361625->SetBinContent(4,11.90495);
   sysHistEn0.7940666361625->SetEntries(4);

   ci = TColor::GetColor("#19c600");
   sysHistEn0.7940666361625->SetLineColor(ci);
   sysHistEn0.7940666361625->SetLineWidth(2);

   ci = TColor::GetColor("#19c600");
   sysHistEn0.7940666361625->SetMarkerColor(ci);
   sysHistEn0.7940666361625->SetMarkerStyle(20);
   sysHistEn0.7940666361625->SetMarkerSize(1.65);
   sysHistEn0.7940666361625->GetXaxis()->SetNdivisions(1005);
   sysHistEn0.7940666361625->GetXaxis()->SetLabelFont(43);
   sysHistEn0.7940666361625->GetXaxis()->SetLabelOffset(0.008);
   sysHistEn0.7940666361625->GetXaxis()->SetLabelSize(34);
   sysHistEn0.7940666361625->GetXaxis()->SetTitleSize(40);
   sysHistEn0.7940666361625->GetXaxis()->SetTickLength(0.025);
   sysHistEn0.7940666361625->GetXaxis()->SetTitleOffset(0.99);
   sysHistEn0.7940666361625->GetXaxis()->SetTitleFont(43);
   sysHistEn0.7940666361625->GetYaxis()->SetNdivisions(512);
   sysHistEn0.7940666361625->GetYaxis()->SetLabelFont(43);
   sysHistEn0.7940666361625->GetYaxis()->SetLabelOffset(0.008);
   sysHistEn0.7940666361625->GetYaxis()->SetLabelSize(34);
   sysHistEn0.7940666361625->GetYaxis()->SetTitleSize(40);
   sysHistEn0.7940666361625->GetYaxis()->SetTickLength(0.025);
   sysHistEn0.7940666361625->GetYaxis()->SetTitleOffset(1.2);
   sysHistEn0.7940666361625->GetYaxis()->SetTitleFont(43);
   sysHistEn0.7940666361625->GetZaxis()->SetLabelFont(43);
   sysHistEn0.7940666361625->GetZaxis()->SetLabelOffset(0.008);
   sysHistEn0.7940666361625->GetZaxis()->SetLabelSize(34);
   sysHistEn0.7940666361625->GetZaxis()->SetTitleSize(40);
   sysHistEn0.7940666361625->GetZaxis()->SetTitleFont(43);
   sysHistEn0.7940666361625->Draw("HISTSameLP");
   
   TH1F *sysHistRes0.54948712566 = new TH1F("sysHistRes0.54948712566","",4,0,300);
   sysHistRes0.54948712566->SetBinContent(1,9.396682);
   sysHistRes0.54948712566->SetBinContent(2,2.255687);
   sysHistRes0.54948712566->SetBinContent(3,0.6400767);
   sysHistRes0.54948712566->SetBinContent(4,14.08758);
   sysHistRes0.54948712566->SetEntries(4);

   ci = TColor::GetColor("#198c0c");
   sysHistRes0.54948712566->SetLineColor(ci);
   sysHistRes0.54948712566->SetLineStyle(2);
   sysHistRes0.54948712566->SetLineWidth(3);

   ci = TColor::GetColor("#198c0c");
   sysHistRes0.54948712566->SetMarkerColor(ci);
   sysHistRes0.54948712566->SetMarkerStyle(20);
   sysHistRes0.54948712566->SetMarkerSize(1.65);
   sysHistRes0.54948712566->GetXaxis()->SetNdivisions(1005);
   sysHistRes0.54948712566->GetXaxis()->SetLabelFont(43);
   sysHistRes0.54948712566->GetXaxis()->SetLabelOffset(0.008);
   sysHistRes0.54948712566->GetXaxis()->SetLabelSize(34);
   sysHistRes0.54948712566->GetXaxis()->SetTitleSize(40);
   sysHistRes0.54948712566->GetXaxis()->SetTickLength(0.025);
   sysHistRes0.54948712566->GetXaxis()->SetTitleOffset(0.99);
   sysHistRes0.54948712566->GetXaxis()->SetTitleFont(43);
   sysHistRes0.54948712566->GetYaxis()->SetNdivisions(512);
   sysHistRes0.54948712566->GetYaxis()->SetLabelFont(43);
   sysHistRes0.54948712566->GetYaxis()->SetLabelOffset(0.008);
   sysHistRes0.54948712566->GetYaxis()->SetLabelSize(34);
   sysHistRes0.54948712566->GetYaxis()->SetTitleSize(40);
   sysHistRes0.54948712566->GetYaxis()->SetTickLength(0.025);
   sysHistRes0.54948712566->GetYaxis()->SetTitleOffset(1.2);
   sysHistRes0.54948712566->GetYaxis()->SetTitleFont(43);
   sysHistRes0.54948712566->GetZaxis()->SetLabelFont(43);
   sysHistRes0.54948712566->GetZaxis()->SetLabelOffset(0.008);
   sysHistRes0.54948712566->GetZaxis()->SetLabelSize(34);
   sysHistRes0.54948712566->GetZaxis()->SetTitleSize(40);
   sysHistRes0.54948712566->GetZaxis()->SetTitleFont(43);
   sysHistRes0.54948712566->Draw("HISTSameLP");
   
   TH1F *sysHistQScaleTChannel0.08850049478777 = new TH1F("sysHistQScaleTChannel0.08850049478777","",4,0,300);
   sysHistQScaleTChannel0.08850049478777->SetBinContent(1,10.71324);
   sysHistQScaleTChannel0.08850049478777->SetBinContent(2,10.90071);
   sysHistQScaleTChannel0.08850049478777->SetBinContent(3,12.1283);
   sysHistQScaleTChannel0.08850049478777->SetBinContent(4,9.412189);
   sysHistQScaleTChannel0.08850049478777->SetEntries(4);

   ci = TColor::GetColor("#7f0cff");
   sysHistQScaleTChannel0.08850049478777->SetLineColor(ci);
   sysHistQScaleTChannel0.08850049478777->SetLineWidth(2);

   ci = TColor::GetColor("#7f0cff");
   sysHistQScaleTChannel0.08850049478777->SetMarkerColor(ci);
   sysHistQScaleTChannel0.08850049478777->SetMarkerStyle(20);
   sysHistQScaleTChannel0.08850049478777->SetMarkerSize(1.65);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetNdivisions(1005);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetLabelFont(43);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetLabelOffset(0.008);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetLabelSize(34);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetTitleSize(40);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetTickLength(0.025);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetTitleOffset(0.99);
   sysHistQScaleTChannel0.08850049478777->GetXaxis()->SetTitleFont(43);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetNdivisions(512);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetLabelFont(43);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetLabelOffset(0.008);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetLabelSize(34);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetTitleSize(40);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetTickLength(0.025);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetTitleOffset(1.2);
   sysHistQScaleTChannel0.08850049478777->GetYaxis()->SetTitleFont(43);
   sysHistQScaleTChannel0.08850049478777->GetZaxis()->SetLabelFont(43);
   sysHistQScaleTChannel0.08850049478777->GetZaxis()->SetLabelOffset(0.008);
   sysHistQScaleTChannel0.08850049478777->GetZaxis()->SetLabelSize(34);
   sysHistQScaleTChannel0.08850049478777->GetZaxis()->SetTitleSize(40);
   sysHistQScaleTChannel0.08850049478777->GetZaxis()->SetTitleFont(43);
   sysHistQScaleTChannel0.08850049478777->Draw("HISTSameLP");
   
   TH1F *sysHistQScaleWjets0.3175403389548 = new TH1F("sysHistQScaleWjets0.3175403389548","",4,0,300);
   sysHistQScaleWjets0.3175403389548->SetBinContent(1,21.22214);
   sysHistQScaleWjets0.3175403389548->SetBinContent(2,1.489533);
   sysHistQScaleWjets0.3175403389548->SetBinContent(3,0.5883611);
   sysHistQScaleWjets0.3175403389548->SetBinContent(4,4.337791);
   sysHistQScaleWjets0.3175403389548->SetEntries(4);

   ci = TColor::GetColor("#cc6600");
   sysHistQScaleWjets0.3175403389548->SetLineColor(ci);
   sysHistQScaleWjets0.3175403389548->SetLineWidth(2);

   ci = TColor::GetColor("#cc6600");
   sysHistQScaleWjets0.3175403389548->SetMarkerColor(ci);
   sysHistQScaleWjets0.3175403389548->SetMarkerStyle(20);
   sysHistQScaleWjets0.3175403389548->SetMarkerSize(1.65);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetNdivisions(1005);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetLabelFont(43);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetLabelOffset(0.008);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetLabelSize(34);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetTitleSize(40);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetTickLength(0.025);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetTitleOffset(0.99);
   sysHistQScaleWjets0.3175403389548->GetXaxis()->SetTitleFont(43);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetNdivisions(512);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetLabelFont(43);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetLabelOffset(0.008);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetLabelSize(34);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetTitleSize(40);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetTickLength(0.025);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetTitleOffset(1.2);
   sysHistQScaleWjets0.3175403389548->GetYaxis()->SetTitleFont(43);
   sysHistQScaleWjets0.3175403389548->GetZaxis()->SetLabelFont(43);
   sysHistQScaleWjets0.3175403389548->GetZaxis()->SetLabelOffset(0.008);
   sysHistQScaleWjets0.3175403389548->GetZaxis()->SetLabelSize(34);
   sysHistQScaleWjets0.3175403389548->GetZaxis()->SetTitleSize(40);
   sysHistQScaleWjets0.3175403389548->GetZaxis()->SetTitleFont(43);
   sysHistQScaleWjets0.3175403389548->Draw("HISTSameLP");
   
   TH1F *sysHistTopMass0.694967092639 = new TH1F("sysHistTopMass0.694967092639","",4,0,300);
   sysHistTopMass0.694967092639->SetBinContent(1,14.84671);
   sysHistTopMass0.694967092639->SetBinContent(2,7.019342);
   sysHistTopMass0.694967092639->SetBinContent(3,1.290461);
   sysHistTopMass0.694967092639->SetBinContent(4,2.013896);
   sysHistTopMass0.694967092639->SetEntries(4);

   ci = TColor::GetColor("#ff0019");
   sysHistTopMass0.694967092639->SetLineColor(ci);
   sysHistTopMass0.694967092639->SetLineWidth(2);

   ci = TColor::GetColor("#ff0019");
   sysHistTopMass0.694967092639->SetMarkerColor(ci);
   sysHistTopMass0.694967092639->SetMarkerStyle(20);
   sysHistTopMass0.694967092639->SetMarkerSize(1.65);
   sysHistTopMass0.694967092639->GetXaxis()->SetNdivisions(1005);
   sysHistTopMass0.694967092639->GetXaxis()->SetLabelFont(43);
   sysHistTopMass0.694967092639->GetXaxis()->SetLabelOffset(0.008);
   sysHistTopMass0.694967092639->GetXaxis()->SetLabelSize(34);
   sysHistTopMass0.694967092639->GetXaxis()->SetTitleSize(40);
   sysHistTopMass0.694967092639->GetXaxis()->SetTickLength(0.025);
   sysHistTopMass0.694967092639->GetXaxis()->SetTitleOffset(0.99);
   sysHistTopMass0.694967092639->GetXaxis()->SetTitleFont(43);
   sysHistTopMass0.694967092639->GetYaxis()->SetNdivisions(512);
   sysHistTopMass0.694967092639->GetYaxis()->SetLabelFont(43);
   sysHistTopMass0.694967092639->GetYaxis()->SetLabelOffset(0.008);
   sysHistTopMass0.694967092639->GetYaxis()->SetLabelSize(34);
   sysHistTopMass0.694967092639->GetYaxis()->SetTitleSize(40);
   sysHistTopMass0.694967092639->GetYaxis()->SetTickLength(0.025);
   sysHistTopMass0.694967092639->GetYaxis()->SetTitleOffset(1.2);
   sysHistTopMass0.694967092639->GetYaxis()->SetTitleFont(43);
   sysHistTopMass0.694967092639->GetZaxis()->SetLabelFont(43);
   sysHistTopMass0.694967092639->GetZaxis()->SetLabelOffset(0.008);
   sysHistTopMass0.694967092639->GetZaxis()->SetLabelSize(34);
   sysHistTopMass0.694967092639->GetZaxis()->SetTitleSize(40);
   sysHistTopMass0.694967092639->GetZaxis()->SetTitleFont(43);
   sysHistTopMass0.694967092639->Draw("HISTSameLP");
   
   TH1F *sysHistNoTopPt0.14241664588710 = new TH1F("sysHistNoTopPt0.14241664588710","",4,0,300);
   sysHistNoTopPt0.14241664588710->SetBinContent(1,18.15695);
   sysHistNoTopPt0.14241664588710->SetBinContent(2,2.119027);
   sysHistNoTopPt0.14241664588710->SetBinContent(3,2.588337);
   sysHistNoTopPt0.14241664588710->SetBinContent(4,1.316043);
   sysHistNoTopPt0.14241664588710->SetEntries(4);

   ci = TColor::GetColor("#cc1933");
   sysHistNoTopPt0.14241664588710->SetLineColor(ci);
   sysHistNoTopPt0.14241664588710->SetLineStyle(2);
   sysHistNoTopPt0.14241664588710->SetLineWidth(3);

   ci = TColor::GetColor("#cc1933");
   sysHistNoTopPt0.14241664588710->SetMarkerColor(ci);
   sysHistNoTopPt0.14241664588710->SetMarkerStyle(20);
   sysHistNoTopPt0.14241664588710->SetMarkerSize(1.65);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetNdivisions(1005);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetLabelFont(43);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetLabelOffset(0.008);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetLabelSize(34);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetTitleSize(40);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetTickLength(0.025);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetTitleOffset(0.99);
   sysHistNoTopPt0.14241664588710->GetXaxis()->SetTitleFont(43);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetNdivisions(512);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetLabelFont(43);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetLabelOffset(0.008);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetLabelSize(34);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetTitleSize(40);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetTickLength(0.025);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetTitleOffset(1.2);
   sysHistNoTopPt0.14241664588710->GetYaxis()->SetTitleFont(43);
   sysHistNoTopPt0.14241664588710->GetZaxis()->SetLabelFont(43);
   sysHistNoTopPt0.14241664588710->GetZaxis()->SetLabelOffset(0.008);
   sysHistNoTopPt0.14241664588710->GetZaxis()->SetLabelSize(34);
   sysHistNoTopPt0.14241664588710->GetZaxis()->SetTitleSize(40);
   sysHistNoTopPt0.14241664588710->GetZaxis()->SetTitleFont(43);
   sysHistNoTopPt0.14241664588710->Draw("HISTSameLP");
   
   TH1F *sysHistPowheg0.070294866362611 = new TH1F("sysHistPowheg0.070294866362611","",4,0,300);
   sysHistPowheg0.070294866362611->SetBinContent(1,15.49317);
   sysHistPowheg0.070294866362611->SetBinContent(2,4.884193);
   sysHistPowheg0.070294866362611->SetBinContent(3,8.593274);
   sysHistPowheg0.070294866362611->SetBinContent(4,7.597526);
   sysHistPowheg0.070294866362611->SetEntries(4);

   ci = TColor::GetColor("#197fb2");
   sysHistPowheg0.070294866362611->SetLineColor(ci);
   sysHistPowheg0.070294866362611->SetLineWidth(2);

   ci = TColor::GetColor("#197fb2");
   sysHistPowheg0.070294866362611->SetMarkerColor(ci);
   sysHistPowheg0.070294866362611->SetMarkerStyle(20);
   sysHistPowheg0.070294866362611->SetMarkerSize(1.65);
   sysHistPowheg0.070294866362611->GetXaxis()->SetNdivisions(1005);
   sysHistPowheg0.070294866362611->GetXaxis()->SetLabelFont(43);
   sysHistPowheg0.070294866362611->GetXaxis()->SetLabelOffset(0.008);
   sysHistPowheg0.070294866362611->GetXaxis()->SetLabelSize(34);
   sysHistPowheg0.070294866362611->GetXaxis()->SetTitleSize(40);
   sysHistPowheg0.070294866362611->GetXaxis()->SetTickLength(0.025);
   sysHistPowheg0.070294866362611->GetXaxis()->SetTitleOffset(0.99);
   sysHistPowheg0.070294866362611->GetXaxis()->SetTitleFont(43);
   sysHistPowheg0.070294866362611->GetYaxis()->SetNdivisions(512);
   sysHistPowheg0.070294866362611->GetYaxis()->SetLabelFont(43);
   sysHistPowheg0.070294866362611->GetYaxis()->SetLabelOffset(0.008);
   sysHistPowheg0.070294866362611->GetYaxis()->SetLabelSize(34);
   sysHistPowheg0.070294866362611->GetYaxis()->SetTitleSize(40);
   sysHistPowheg0.070294866362611->GetYaxis()->SetTickLength(0.025);
   sysHistPowheg0.070294866362611->GetYaxis()->SetTitleOffset(1.2);
   sysHistPowheg0.070294866362611->GetYaxis()->SetTitleFont(43);
   sysHistPowheg0.070294866362611->GetZaxis()->SetLabelFont(43);
   sysHistPowheg0.070294866362611->GetZaxis()->SetLabelOffset(0.008);
   sysHistPowheg0.070294866362611->GetZaxis()->SetLabelSize(34);
   sysHistPowheg0.070294866362611->GetZaxis()->SetTitleSize(40);
   sysHistPowheg0.070294866362611->GetZaxis()->SetTitleFont(43);
   sysHistPowheg0.070294866362611->Draw("HISTSameLP");
   
   TH1F *sysHistHerwig0.57627222052712 = new TH1F("sysHistHerwig0.57627222052712","",4,0,300);
   sysHistHerwig0.57627222052712->SetBinContent(1,15.82608);
   sysHistHerwig0.57627222052712->SetBinContent(2,4.445577);
   sysHistHerwig0.57627222052712->SetBinContent(3,7.39765);
   sysHistHerwig0.57627222052712->SetBinContent(4,5.544775);
   sysHistHerwig0.57627222052712->SetEntries(4);

   ci = TColor::GetColor("#7200ff");
   sysHistHerwig0.57627222052712->SetLineColor(ci);
   sysHistHerwig0.57627222052712->SetLineStyle(2);
   sysHistHerwig0.57627222052712->SetLineWidth(3);

   ci = TColor::GetColor("#7200ff");
   sysHistHerwig0.57627222052712->SetMarkerColor(ci);
   sysHistHerwig0.57627222052712->SetMarkerStyle(20);
   sysHistHerwig0.57627222052712->SetMarkerSize(1.65);
   sysHistHerwig0.57627222052712->GetXaxis()->SetNdivisions(1005);
   sysHistHerwig0.57627222052712->GetXaxis()->SetLabelFont(43);
   sysHistHerwig0.57627222052712->GetXaxis()->SetLabelOffset(0.008);
   sysHistHerwig0.57627222052712->GetXaxis()->SetLabelSize(34);
   sysHistHerwig0.57627222052712->GetXaxis()->SetTitleSize(40);
   sysHistHerwig0.57627222052712->GetXaxis()->SetTickLength(0.025);
   sysHistHerwig0.57627222052712->GetXaxis()->SetTitleOffset(0.99);
   sysHistHerwig0.57627222052712->GetXaxis()->SetTitleFont(43);
   sysHistHerwig0.57627222052712->GetYaxis()->SetNdivisions(512);
   sysHistHerwig0.57627222052712->GetYaxis()->SetLabelFont(43);
   sysHistHerwig0.57627222052712->GetYaxis()->SetLabelOffset(0.008);
   sysHistHerwig0.57627222052712->GetYaxis()->SetLabelSize(34);
   sysHistHerwig0.57627222052712->GetYaxis()->SetTitleSize(40);
   sysHistHerwig0.57627222052712->GetYaxis()->SetTickLength(0.025);
   sysHistHerwig0.57627222052712->GetYaxis()->SetTitleOffset(1.2);
   sysHistHerwig0.57627222052712->GetYaxis()->SetTitleFont(43);
   sysHistHerwig0.57627222052712->GetZaxis()->SetLabelFont(43);
   sysHistHerwig0.57627222052712->GetZaxis()->SetLabelOffset(0.008);
   sysHistHerwig0.57627222052712->GetZaxis()->SetLabelSize(34);
   sysHistHerwig0.57627222052712->GetZaxis()->SetTitleSize(40);
   sysHistHerwig0.57627222052712->GetZaxis()->SetTitleFont(43);
   sysHistHerwig0.57627222052712->Draw("HISTSameLP");
   TLine *line = new TLine(75,0,75,26);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(150,0,150,26);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(225,0,225,26);
   line->SetLineStyle(2);
   line->Draw();
   
   TH2F *axisUnc0.0582084754746_copy13 = new TH2F("axisUnc0.0582084754746_copy13","",50,0,300,50,0,26);
   axisUnc0.0582084754746_copy13->SetDirectory(0);
   axisUnc0.0582084754746_copy13->SetLineStyle(0);
   axisUnc0.0582084754746_copy13->SetMarkerStyle(20);
   axisUnc0.0582084754746_copy13->SetMarkerSize(0.16);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetTitle("p#lower[0.4]{#scale[0.7]{T}}#kern[-0.5]{ }(t+t#lower[-0.87]{#kern[-0.91]{-}}) (GeV)");
   axisUnc0.0582084754746_copy13->GetXaxis()->SetNdivisions(1005);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetLabelFont(43);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetLabelOffset(0.008);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetLabelSize(31);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetTitleSize(34);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetTickLength(0.04950495);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetTitleOffset(1.1);
   axisUnc0.0582084754746_copy13->GetXaxis()->SetTitleFont(43);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetTitle("Uncertainty (%)");
   axisUnc0.0582084754746_copy13->GetYaxis()->SetNdivisions(512);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetLabelFont(43);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetLabelOffset(0.008);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetLabelSize(31);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetTitleSize(34);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetTickLength(0.01875);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetTitleOffset(1.1);
   axisUnc0.0582084754746_copy13->GetYaxis()->SetTitleFont(43);
   axisUnc0.0582084754746_copy13->GetZaxis()->SetLabelFont(43);
   axisUnc0.0582084754746_copy13->GetZaxis()->SetLabelOffset(0.008);
   axisUnc0.0582084754746_copy13->GetZaxis()->SetLabelSize(34);
   axisUnc0.0582084754746_copy13->GetZaxis()->SetTitleSize(40);
   axisUnc0.0582084754746_copy13->GetZaxis()->SetTitleFont(43);
   axisUnc0.0582084754746_copy13->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.63,0.126,0.99,0.94,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(33);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("statHistHerwig0.424906296664","Statistical","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistBtag0.643915019564","b-tagging efficiency","L");

   ci = TColor::GetColor("#ff6619");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistPU0.739616943359","Pileup","L");

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistEn0.794066636162","Jet energy scale","L");

   ci = TColor::GetColor("#19c600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistRes0.5494871256","Jet energy resolution","L");

   ci = TColor::GetColor("#198c0c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistQScaleTChannel0.0885004947877","#it{t}-ch fact./renorm. scale","L");

   ci = TColor::GetColor("#7f0cff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistQScaleWjets0.317540338954","W+jets fact./renorm. scale","L");

   ci = TColor::GetColor("#cc6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistTopMass0.69496709263","Top quark mass","L");

   ci = TColor::GetColor("#ff0019");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistNoTopPt0.142416645887","Top quark p#lower[0.3]{#scale[0.7]{T}} rew.","L");

   ci = TColor::GetColor("#cc1933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistPowheg0.0702948663626","Signal modeling","L");

   ci = TColor::GetColor("#197fb2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("sysHistHerwig0.576272220527","Hadronization modeling","L");

   ci = TColor::GetColor("#7200ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.11,0.94,0.11,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(63);
   pt->SetTextSize(33);
   TText *AText = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.17,0.94,0.17,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(53);
   pt->SetTextSize(33);
   AText = pt->AddText("Preliminary");
   pt->Draw();
   
   pt = new TPaveText(0.615,0.94,0.615,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(43);
   pt->SetTextSize(33);
   AText = pt->AddText("2.3#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13#kern[-0.5]{ }TeV)");
   pt->Draw();
   cvUnc0.193662143299->Modified();
   cvUnc0.193662143299->cd();
   cvUnc0.193662143299->SetSelected(cvUnc0.193662143299);
}
