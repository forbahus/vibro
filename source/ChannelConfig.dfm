object OptionsForm: TOptionsForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1050#1072#1085#1072#1083#1086#1074
  ClientHeight = 276
  ClientWidth = 345
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 21
  object ChannelsTree: TTreeView
    Left = 21
    Top = 8
    Width = 161
    Height = 257
    AutoExpand = True
    HideSelection = False
    Indent = 19
    TabOrder = 0
  end
  object SaveBtn: TButton
    Left = 208
    Top = 8
    Width = 126
    Height = 33
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 1
  end
  object CancelBtn: TButton
    Left = 208
    Top = 47
    Width = 126
    Height = 33
    Caption = #1054#1090#1084#1077#1085#1080#1090#1100
    TabOrder = 2
  end
  object GroupOptions: TGroupBox
    Left = 188
    Top = 96
    Width = 149
    Height = 129
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072
    TabOrder = 3
    object HandConfig: TButton
      Left = 20
      Top = 33
      Width = 126
      Height = 33
      Caption = #1056#1091#1095#1085#1072#1103
      TabOrder = 0
    end
    object Colibration: TButton
      Left = 20
      Top = 80
      Width = 126
      Height = 33
      Caption = #1058#1072#1088#1080#1088#1086#1074#1082#1072
      TabOrder = 1
    end
  end
end
